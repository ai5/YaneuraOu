
#include "CppUnitTest.h"

#include "evaluate.h"
#include "position.h"

#include <Windows.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest
{


	TEST_CLASS(EvaluteTest)
	{

	public:
		TEST_CLASS_INITIALIZE(Initialize)
		{
			extern void is_ready();
			is_ready();
		}

		TEST_CLASS_CLEANUP(Cleanup)
		{

		}

		TEST_METHOD(materialTest)
		{
			Position pos;

			Assert::AreEqual((int)Eval::material(pos), 0);
			Assert::AreEqual((int)pos.state()->materialValue, 0);
			Assert::AreEqual((int)Eval::evaluate(pos), -61);

			pos.set("lnBB4l/k+R1G5/1pp1pgn1p/p5p2/3NPP3/2P3P2/PPKp4P/L8/6GNL w RG4S3Pp 116");

			Assert::AreEqual((int)Eval::material(pos), 5207);
			Assert::AreEqual((int)pos.state()->materialValue, 5207);
			Assert::AreEqual((int)Eval::evaluate(pos), -5447);
		}

	};
}