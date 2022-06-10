#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\2.4 oop\2.4 oop\Vector.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector first;
			first.Input(2);
			first.Input(3);

			Assert::AreEqual(1., first.Norma());
		}
	};
}
