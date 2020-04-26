/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Zy");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_medium_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("refer");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_medium_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("rreferr");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_medium_palindrome3)
{
    Practice obj;
    bool actual = obj.isPalindrome("rreefeerr");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_medium_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("referr");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_all_CAPS_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ANNA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_all_CAPS_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ANNAA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_with_numbers)
{
    Practice obj;
    bool actual = obj.isPalindrome("11");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_spaces_hard)
{
    Practice obj;
    bool actual = obj.isPalindrome("was it a rat i saw");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_spaces_easy)
{
    Practice obj;
    bool actual = obj.isPalindrome("a a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_with_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("was it a rat i saww");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_with_many_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("w       a   s i    t a ra   t i     sa w");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_sentence)
{
	Practice obj;
	bool actual = obj.isPalindrome("Now saw ye no mosses or foam or aroma of roses So money was won");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_sentence_punctuation)
{
	Practice obj;
	bool actual = obj.isPalindrome("Now saw ye no mosses, or foam or aroma of roses. So money was won");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_sentence_punctuation)
{
	Practice obj;
	bool actual = obj.isPalindrome("Now saaw ye no mosses, or foam or aroma of roses. So money was won");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_multiple_case)
{
    Practice obj;
    bool actual = obj.isPalindrome("AnnA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_multiple_case2)
{
    Practice obj;
    bool actual = obj.isPalindrome("anNA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_multiple_case3)
{
    Practice obj;
    bool actual = obj.isPalindrome("wAs iT a rAt I saw");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_reverse)
{
    Practice obj;
		int first, second, third;
		first = 1;
		second = 2;
		third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(first, third);
		ASSERT_GT(second, third);
}

TEST(PracticeTest, sort_already_done)
{
    Practice obj;
		int first, second, third;
		first = 3;
		second = 2;
		third = 1;
		obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(first, third);
		ASSERT_GT(second, third);
}

TEST(PracticeTest, sort_large_numbers)
{
    Practice obj;
		int first, second, third;
		first = 19848723;
		second = 344;
		third = 324234;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(first, third);
		ASSERT_GT(second, third);
}

TEST(PracticeTest, sort_swap_back)
{
    Practice obj;
		int first, second, third;
		first = 3;
		second = 1;
		third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(first, third);
		ASSERT_GT(second, third);
}

TEST(PracticeTest, sort_swap_front)
{
    Practice obj;
		int first, second, third;
		first = 2;
		second = 3;
		third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(first, third);
		ASSERT_GT(second, third);
}

TEST(PracticeTest, sort_swap_outer)
{
    Practice obj;
		int first, second, third;
		first = 1;
		second = 2;
		third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
		ASSERT_GT(first, third);
		ASSERT_GT(second, third);
}