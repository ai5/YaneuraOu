
#ifndef _ARM_MM_MALLOC_H_
#define _ARM_MM_MALLOC_H_

#include <stdlib.h>
#include <malloc.h>

static inline void *_mm_malloc(int size, int align)
{
  void *ret=0;
  posix_memalign(&ret, align, size); // Guessing here
  std::cout << "mem = " << ret << std::endl;
  return ret;
}

static inline void _mm_free(void *__p)
{
  free(__p);
}


#endif
