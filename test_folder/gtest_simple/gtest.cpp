#include <gtest/gtest.h>
using namespace std;

class Class
{
public:
    int value;
    Class(int val)
    {value = val;}
    void increment(int inc)
    {value+=inc;}
    int getvalue()
    {return value;}
};

class TestClass : public testing::Test{
public:
    Class *c;
    void SetUp(){c = new Class(100); cout << "SetUp"<<endl;};
    void TearDown(){delete c;cout<<"TearDown"<<endl;}
};

TEST_F(TestClass, FirstTest)
{
    c->increment(10);
    ASSERT_EQ(c->getvalue(),110);
}


