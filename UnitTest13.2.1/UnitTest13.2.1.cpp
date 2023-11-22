#include "pch.h"
#include "CppUnitTest.h"
#include "../пр13.2.1/math_operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test = SQR(2);
			Assert::AreEqual(4, test);
		}
	};
}
