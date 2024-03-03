#include "pch.h"
#include "CppUnitTest.h"
#define MAXSIZE 10
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

extern "C" const char* getWinner(char* player1, char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameTest
{
	TEST_CLASS(GameTest)
	{
	public:
		
		TEST_METHOD(GameTest1)
		{
			
			char player1[] = "Rock";
			char player2 [] = "Scissors";

			char output1[10];
			strcpy_s(output1,getWinner(player1, player2));
			Assert::AreEqual("player1", output1);
		}
		TEST_METHOD(GameTest2) {
			char* player1 = "Paper";
			char* player2 = "Paper";
			char output2[10];
			strcpy_s(output2, getWinner(player1, player2));

			Assert::AreEqual("Draw", output2);
		}
	};
}
