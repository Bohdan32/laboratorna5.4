#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s0= S0(1);
			int s1 = S1(1,1);
			int s2 = S2(1,1);
			int s3 = S3(1,1,0);
			int s4 = S4(1,1,0);
			
			Assert::AreEqual(s0, 2);
			Assert::AreEqual(s1, 2);
			Assert::AreEqual(s2, 2);
			Assert::AreEqual(s3, 2);
			Assert::AreEqual(s4, 2);
		}
	};
}
