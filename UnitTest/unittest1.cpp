
#include "CppUnitTest.h"
#include "bitboard.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_MODULE_INITIALIZE(TestInitialize)
	{
		// 一度だけ呼ばれる？初期化

		Bitboards::init();
	}

	TEST_MODULE_CLEANUP(TestCleanup)
	{
		// 一度だけ呼ばれる？
	}


}