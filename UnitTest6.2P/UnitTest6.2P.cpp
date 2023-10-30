#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6.2P/LAB6.2P.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62P
{
	TEST_CLASS(UnitTest62P)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 24, 2, 6, 4, 5, 34, 7, 8 };
			int n = 8;

			double z = calculateAverage(a, n);
			Assert::AreEqual(z, 10.5);
		}
	};
}
