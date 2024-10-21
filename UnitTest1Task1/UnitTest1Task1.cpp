#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
extern "C" int setLength(int);
extern "C" int setWidth(int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Task1
{
	TEST_CLASS(UnitTest1Task1)
	{
	public:
		
		TEST_METHOD(perimeter)
		{
			int Result = 0;
			Result = getPerimeter(2, 2);
			Assert::AreEqual(4, Result);
		}

		TEST_METHOD(area)
		{
			int Result = 0;
			Result = getArea(2, 2);
			Assert::AreEqual(4, Result);
		}

		TEST_METHOD(lengthValidInput)
		{
			int length = 0;
			setLength(50);
			Assert::AreEqual(50, length, L"Failed invalid length.");
		}

		TEST_METHOD(lengthBelowRange)
		{
			int length = 10;
			setLength(0);
			Assert::AreEqual(10, length, L"Length should not change for input below range.");
		}

		TEST_METHOD(lengthAboveRange)
		{
			int length = 20;
			setLength(100);
			Assert::AreEqual(20, length, L"Length should not change for input above range.");
		}

		TEST_METHOD(widthValidInput)
		{
			int width = 0;
			setWidth(25);
			Assert::AreEqual(25, width, L"Failed invalid width.");
		}

		TEST_METHOD(widthBelowRange)
		{
			int width = 5;
			setWidth(0);
			Assert::AreEqual(5, width, L"Width should not change for input below range.");
		}

		TEST_METHOD(widthAboveRange)
		{
			int width = 50;
			setWidth(101);
			Assert::AreEqual(50, width, L"Width should not change for input above range.");
		}

	};
}
