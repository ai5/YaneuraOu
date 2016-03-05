
#include "CppUnitTest.h"

#include "bitboard.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest
{
	

	TEST_CLASS(BitboardTest)
	{

	public:


		TEST_METHOD(EqualTest)
		{
			// TODO: テスト コードをここに挿入します

			Bitboard aa(0x12345678, 0x9abcdef1);
			Bitboard bb;

			bb.set(0x12345678, 0x9abcdef1);

			Assert::AreEqual(aa == aa, true);
			Assert::AreEqual(aa == bb, true);

			bb.set(0x12345678, 0x12345678);
			Assert::AreEqual(aa == bb, false);

			bb.set(0x12335678, 0x9abcdef1);
			Assert::AreEqual(aa == bb, false);
		}

		BEGIN_TEST_METHOD_ATTRIBUTE(InitSQTest)
			TEST_OWNER(L"オーナー")
			TEST_DESCRIPTION(L"ディスクリプション")
			END_TEST_METHOD_ATTRIBUTE()

			TEST_METHOD(InitSQTest)
		{

			{ Bitboard aa(SQ_11);  Bitboard bb(1 << 0, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_12);  Bitboard bb(1 << 1, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_13);  Bitboard bb(1 << 2, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_14);  Bitboard bb(1 << 3, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_15);  Bitboard bb(1 << 4, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_16);  Bitboard bb(1 << 5, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_17);  Bitboard bb(1 << 6, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_18);  Bitboard bb(1 << 7, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_19);  Bitboard bb(1 << 8, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_21);  Bitboard bb(1 << 9, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_22);  Bitboard bb(1 << 10, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_23);  Bitboard bb(1 << 11, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_24);  Bitboard bb(1 << 12, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_25);  Bitboard bb(1 << 13, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_26);  Bitboard bb(1 << 14, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_27);  Bitboard bb(1 << 15, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_28);  Bitboard bb(1 << 16, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_29);  Bitboard bb(1 << 17, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_31);  Bitboard bb(1 << 18, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_32);  Bitboard bb(1 << 19, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_33);  Bitboard bb(1 << 20, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_34);  Bitboard bb(1 << 21, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_35);  Bitboard bb(1 << 22, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_36);  Bitboard bb(1 << 23, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_37);  Bitboard bb(1 << 24, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_38);  Bitboard bb(1 << 25, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_39);  Bitboard bb(1 << 26, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_41);  Bitboard bb(1 << 27, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_42);  Bitboard bb(1 << 28, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_43);  Bitboard bb(1 << 29, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_44);  Bitboard bb(1 << 30, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_45);  Bitboard bb(1ULL << 31, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_46);  Bitboard bb(1ULL << 32, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_47);  Bitboard bb(1ULL << 33, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_48);  Bitboard bb(1ULL << 34, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_49);  Bitboard bb(1ULL << 35, 0); Assert::AreEqual(aa == bb, true); }

			{ Bitboard aa(SQ_51);  Bitboard bb(1ULL << 36, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_52);  Bitboard bb(1ULL << 37, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_53);  Bitboard bb(1ULL << 38, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_54);  Bitboard bb(1ULL << 39, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_55);  Bitboard bb(1ULL << 40, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_56);  Bitboard bb(1ULL << 41, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_57);  Bitboard bb(1ULL << 42, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_58);  Bitboard bb(1ULL << 43, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_59);  Bitboard bb(1ULL << 44, 0); Assert::AreEqual(aa == bb, true); }

			{ Bitboard aa(SQ_61);  Bitboard bb(1ULL << 45, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_62);  Bitboard bb(1ULL << 46, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_63);  Bitboard bb(1ULL << 47, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_64);  Bitboard bb(1ULL << 48, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_65);  Bitboard bb(1ULL << 49, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_66);  Bitboard bb(1ULL << 50, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_67);  Bitboard bb(1ULL << 51, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_68);  Bitboard bb(1ULL << 52, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_69);  Bitboard bb(1ULL << 53, 0); Assert::AreEqual(aa == bb, true); }

			{ Bitboard aa(SQ_71);  Bitboard bb(1ULL << 54, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_72);  Bitboard bb(1ULL << 55, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_73);  Bitboard bb(1ULL << 56, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_74);  Bitboard bb(1ULL << 57, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_75);  Bitboard bb(1ULL << 58, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_76);  Bitboard bb(1ULL << 59, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_77);  Bitboard bb(1ULL << 60, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_78);  Bitboard bb(1ULL << 61, 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_79);  Bitboard bb(1ULL << 62, 0); Assert::AreEqual(aa == bb, true); }

			{ Bitboard aa(SQ_81);  Bitboard bb(0, 1 << 0); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_82);  Bitboard bb(0, 1 << 1); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_83);  Bitboard bb(0, 1 << 2); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_84);  Bitboard bb(0, 1 << 3); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_85);  Bitboard bb(0, 1 << 4); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_86);  Bitboard bb(0, 1 << 5); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_87);  Bitboard bb(0, 1 << 6); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_88);  Bitboard bb(0, 1 << 7); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_89);  Bitboard bb(0, 1 << 8); Assert::AreEqual(aa == bb, true); }

			{ Bitboard aa(SQ_91);  Bitboard bb(0, 1 << 9); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_92);  Bitboard bb(0, 1 << 10); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_93);  Bitboard bb(0, 1 << 11); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_94);  Bitboard bb(0, 1 << 12); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_95);  Bitboard bb(0, 1 << 13); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_96);  Bitboard bb(0, 1 << 14); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_97);  Bitboard bb(0, 1 << 15); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_98);  Bitboard bb(0, 1 << 16); Assert::AreEqual(aa == bb, true); }
			{ Bitboard aa(SQ_99);  Bitboard bb(0, 1 << 17); Assert::AreEqual(aa == bb, true); }

		}

		TEST_METHOD(BoolTest)
		{
			{ Bitboard aa(0, 0); Assert::AreEqual((bool)aa, false); }
			{ Bitboard aa(1, 0); Assert::AreEqual((bool)aa, true); }
			{ Bitboard aa(0, 1); Assert::AreEqual((bool)aa, true); }
			{ Bitboard aa(1, 1); Assert::AreEqual((bool)aa, true); }
		}

		TEST_METHOD(PartTest)
		{
			Assert::AreEqual(Bitboard::part(SQ_19), 0);
			Assert::AreEqual(Bitboard::part(SQ_28), 0);
			Assert::AreEqual(Bitboard::part(SQ_37), 0);
			Assert::AreEqual(Bitboard::part(SQ_46), 0);
			Assert::AreEqual(Bitboard::part(SQ_55), 0);
			Assert::AreEqual(Bitboard::part(SQ_64), 0);
			Assert::AreEqual(Bitboard::part(SQ_73), 0);
			Assert::AreEqual(Bitboard::part(SQ_82), 1);
			Assert::AreEqual(Bitboard::part(SQ_91), 1);
		}

		TEST_METHOD(PopTest)
		{
			Bitboard aa(0x1010, 0x1);

			Assert::AreEqual((int)aa.pop(), 4);
			Assert::AreEqual((int)aa.pop(), 12);
			Assert::AreEqual((int)aa.pop(), 63);


			{ Bitboard bb(1, 1); Assert::AreEqual((int)bb.pop_c(), 0); }
			{ Bitboard bb(1 << 8, 1); Assert::AreEqual((int)bb.pop_c(), 8); }
			{ Bitboard bb(1 << 30, 1); Assert::AreEqual((int)bb.pop_c(), 30); }
			{ Bitboard bb(1ULL << 50, 1); Assert::AreEqual((int)bb.pop_c(), 50); }
			{ Bitboard bb(1ULL << 62, 1); Assert::AreEqual((int)bb.pop_c(), 62); }
			{ Bitboard bb(0, 1 << 0); Assert::AreEqual((int)bb.pop_c(), 63); }
			{ Bitboard bb(0, 1 << 8); Assert::AreEqual((int)bb.pop_c(), 63 + 8); }
			{ Bitboard bb(0, 1 << 11); Assert::AreEqual((int)bb.pop_c(), 63 + 11); }


			aa.set(0x1010, 0x37);
			Assert::AreEqual((int)aa.pop_from_p0(), 4);
			Assert::AreEqual((int)aa.pop_from_p0(), 12);
			Assert::AreEqual((int)aa.pop_from_p1(), 63 + 0);
			Assert::AreEqual((int)aa.pop_from_p1(), 63 + 1);
			Assert::AreEqual((int)aa.pop_from_p1(), 63 + 2);
			Assert::AreEqual((int)aa.pop_from_p1(), 63 + 4);
			Assert::AreEqual((int)aa.pop_from_p1(), 63 + 5);
		}

		TEST_METHOD(PopcountTest)
		{

			Bitboard aa(0x123456789ABCDEF0ULL, 0x54321);

			Assert::AreEqual(aa.pop_count(), 32 + 7);
		}

		TEST_METHOD(AddTest)
		{
			Bitboard aa(0x123456789ABCDEF0ULL, 0x54321);
			Bitboard bb(0x123456789ABCDEF0ULL, 0x54321);
			Bitboard cc = aa + bb;
			Assert::AreEqual(cc.p[0], 0x2468ACF13579BDE0ULL);
			Assert::AreEqual(cc.p[1], 0xA8642ULL);

			aa.set(0xFEDCBA9876543210, 0x12345);
			cc = aa + bb;
			Assert::AreEqual(cc.p[0], 0x1111111111111100ULL);
			Assert::AreEqual(cc.p[1], 0x66666ULL); // 桁上りは無し？

			cc -= bb;
			Assert::AreEqual(cc.p[0], 0xFEDCBA9876543210);
			Assert::AreEqual(cc.p[1], 0x12345ULL); // 桁下がりは無し？

			aa.set(0x1111222233334444ULL, 0x55557);
			bb.set(0x4444555566667777ULL, 0x11118);

			cc = aa | bb;
			Assert::AreEqual(cc.p[0], 0x5555777777777777ULL);
			Assert::AreEqual(cc.p[1], 0x5555FULL);

			cc = aa & bb;
			Assert::AreEqual(cc.p[0], 0x22224444ULL);
			Assert::AreEqual(cc.p[1], 0x11110ULL);

			cc = aa ^ bb;
			Assert::AreEqual(cc.p[0], 0x5555777755553333ULL);
			Assert::AreEqual(cc.p[1], 0x4444FULL);

			cc = cc ^ bb;
			Assert::AreEqual(cc.p[0], aa.p[0]);
			Assert::AreEqual(cc.p[1], aa.p[1]);
		}

		TEST_METHOD(ShiftTest)
		{

			Bitboard aa(0x8000000180000001, 0x80001);

			aa <<= 1;
			Assert::AreEqual(aa.p[0], 0x300000002ULL);
			Assert::AreEqual(aa.p[1], 0x100002ULL); // 桁あがり無し？

			aa.set(0x8000000180000001, 0x80001);
			aa >>= 1;
			Assert::AreEqual(aa.p[0], 0x40000000C0000000ULL); // 桁下がり無し？
			Assert::AreEqual(aa.p[1], 0x40000ULL); 
		}


	};
}