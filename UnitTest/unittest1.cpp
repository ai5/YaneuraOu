
#include "CppUnitTest.h"
#include "bitboard.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_MODULE_INITIALIZE(TestInitialize)
	{
		// ��x�����Ă΂��H������

		Bitboards::init();
	}

	TEST_MODULE_CLEANUP(TestCleanup)
	{
		// ��x�����Ă΂��H
	}


}