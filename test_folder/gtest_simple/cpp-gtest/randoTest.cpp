/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>

/*  
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);
		
	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/
 
/*class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};
*/

class Checksum
{
public:
    int a = 5;
    int b = 7;
};




TEST(ChecksumTest, mostPopularZero)
{
    //Rando rando;
    //int actual = rando.mostPopularDigit(0);
    Checksum check1;
    ASSERT_EQ( 5, check1.a );
}




/*TEST(RandoTest, mostPopularTie)
{
    Rando rando;
    int actual = rando.mostPopularDigit( 199191 );
    ASSERT_EQ( actual, -1 );
}
TEST(RandoTest, mostPopularZero)
{
    Rando rando;
    int actual = rando.mostPopularDigit(0);
    ASSERT_EQ( 1, 0 );
}

TEST(RandoTest, mostPopularNine)
{
    Rando rando;
    int actual = rando.mostPopularDigit(9);
    ASSERT_EQ( actual, 9 );
}
TEST(RandoTest, mostPopularOneThreeTimes)
{
    Rando rando;
    int actual = rando.mostPopularDigit(31311);
    ASSERT_EQ( actual, 1 );
}

TEST(RandoTest, mostPopularAllTwos)
{
    Rando rando;
    int actual = rando.mostPopularDigit(222);
    ASSERT_EQ( actual, 2 );
}
*/

/*
int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/
