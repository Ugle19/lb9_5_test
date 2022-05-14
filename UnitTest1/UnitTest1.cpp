#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Games\project\lb9_5_test\lb9_5_test\lb9_5_test.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int arr[n] = { 12,43,99,12,32 };
			int t =BigSum(arr, n);
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(t, 18);
		}
	};
}
