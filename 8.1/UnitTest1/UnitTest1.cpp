#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Dell\source\repos\8.1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            char str = 'woow';
            char x = '.';
            int t;
            t = findIndex(&str, x);
            Assert::AreEqual(t, -1);
        }
	};
}
