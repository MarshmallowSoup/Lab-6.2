#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6-2_iter/Lab_6-2_iter.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = {3,2,6,8,1,9,5,4,7,0};
			int k = Min(a, n);
			Assert::AreEqual(0, k);
		}
		TEST_METHOD(TestMethod2)
		{
			const int n = 10;
			int a[n] = {3,2,6,8,1,9,5,4,7,0 };
			int k = Max(a, n);
			Assert::AreEqual(9, k);
		}
	};
}
