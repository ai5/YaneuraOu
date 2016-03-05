
#include "CppUnitTest.h"

#include "shogi.h"
#include "bitboard.h"
#include "position.h"
#include "search.h"
#include "thread.h"
#include "evaluate.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern void is_ready();

namespace UnitTest
{		
	TEST_MODULE_INITIALIZE(TestInitialize)
	{
		// 初期化
		USI::init(Options);
		Bitboards::init();
		Position::init();
		Search::init();
		Threads.init();
		Eval::init(); // 簡単な初期化のみで評価関数の読み込みはisreadyに応じて行なう。

		// is_ready(); -> クラスの初期化で実行すること
	}

	TEST_MODULE_CLEANUP(TestCleanup)
	{
		// 終了処理
		
	}
}