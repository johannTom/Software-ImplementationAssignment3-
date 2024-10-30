#include "pch.h"
#include "CppUnitTest.h"
#include "string.h" 

extern "C" char* rps_result(char*,char*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace rpsUnitTest
{
	TEST_CLASS(rpsUnitTest)
	{
	public:
		
		TEST_METHOD(player1Rockandplayer2Paper)
		{
			 
			char* expected =  "Player2";
			char* result;
			result = rps_result("Rock", "Paper");
			 	 
			Assert::AreEqual(result, expected);
		}
	};
}
