COMPILER = g++
CFLAGS   = -std=c++1y -fno-exceptions -fno-rtti -Wextra -Ofast -MMD -MP -fpermissive
LDFLAGS  = -lpthread
LIBS     =
INCLUDE  = #-I../include

ifeq ($(OS),Windows_NT)
  TARGET = YaneuraOuMingw.exe
  LDFLAGS += -static
else
  TARGET = YaneuraOu
endif

CFLAGS += -DIS_64BIT

OBJDIR   = obj
SOURCES  = source/bitboard.cpp source/misc.cpp source/movegen.cpp source/position.cpp \
           source/shogi.cpp source/thread.cpp source/tt.cpp source/usi.cpp \
           source/eval/evaluate_kpp.cpp source/eval/evaluate_material.cpp \
           source/eval/evaluate_no_eval.cpp source/eval/evaluate_bona_piece.cpp \
           source/extra/bitop.cpp source/extra/book.cpp source/extra/entering_king_win.cpp \
           source/extra/long_effect.cpp source/extra/mate1ply.cpp source/extra/see.cpp \
           source/extra/test_cmd.cpp source/extra/timeman.cpp \
           source/engine/classic-tce-engine/classic-tce-search.cpp \
           source/engine/user-engine/user-engine.cpp


OBJECTS  = $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))
DEPENDS  = $(OBJECTS:.o=.d)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(TARGET): $(OBJECTS) $(LIBS)
	$(COMPILER) -o $@ $^ $(LDFLAGS) $(CFLAGS)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(COMPILER) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(TARGET)

avx2:
	$(MAKE) CFLAGS='$(CFLAGS) -DNDEBUG -DUSE_AVX2 -DUSE_SSE42 -mavx2' LDFLAGS='$(LDFLAGS) -flto' $(TARGET)

sse42:
	$(MAKE) CFLAGS='$(CFLAGS) -DNDEBUG -DUSE_SSE42 -msse4.2' LDFLAGS='$(LDFLAGS) -flto' $(TARGET)

nosse:
	$(MAKE) CFLAGS='$(CFLAGS) -DNDEBUG' LDFLAGS='$(LDFLAGS) -flto' $(TARGET)

prof:
	$(MAKE) CFLAGS='$(CFLAGS) -pg' avx2

profgen:
	$(MAKE) CFLAGS='$(CFLAGS) -fprofile-generate -lgcov' LDFLAGS='$(LDFLAGS) -fprofile-generate -lgcov' avx2

profuse:
	$(MAKE) CFLAGS='$(CFLAGS) -fprofile-use -lgcov' LDFLAGS='$(LDFLAGS) -fprofile-use -lgcov' avx2

pgo:
	$(MAKE) profgen
	@./$(TARGET) bench
	@touch $(SOURCES)
	$(MAKE) profuse

clean:
	rm -f $(OBJECTS) $(DEPENDS) $(TARGET) ${OBJECTS:.o=.gcda}

-include $(DEPENDS)
