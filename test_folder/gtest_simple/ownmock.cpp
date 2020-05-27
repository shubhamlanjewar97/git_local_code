#include <gtest/gtest.h>
#include <gmock/gmock.h>
using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

class Color{
public:
    virtual int isgreen()
    {return 1;}
};

class MockColor : public Color
{
public:
    MOCK_METHOD0(isgreen,int());
    //MOCK_METHOD1(logout,bool(string username));
    //MOCK_METHOD2(login,bool (string username,string password));
};

class MyClass
{
public:
    MockColor c;
    int output()
    {
        int sum = c.isgreen();
        return sum;
    }
};

TEST(MyClassTest,outputsum)
{
    MyClass myclass;

    EXPECT_CALL(myclass.c,isgreen()).WillOnce(Return(5));

    int result = myclass.output();

    EXPECT_EQ(result,1);

}

int main()
{

    cout <<"Test Programe!"<<endl;
}

/*
.WillOnce(Invoke(&obj,&obj::fun));

WillOnce(InvokeWithoutArgs(DummyFun));
*/

