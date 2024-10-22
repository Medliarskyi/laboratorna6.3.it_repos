#include "pch.h"
#include "CppUnitTest.h"
#include "../lab63it/lab63it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 3, -1, 5, -10, 7, 0, -2, 8 };
			int size = sizeof(arr) / sizeof(arr[0]);
			int expectedSum = 23; 

			Assert::AreEqual(expectedSum, sumPositiveElements(arr, size));
		}
	};
}
