#include <gtest/gtest.h>
#include <gmock/gmock.h>
using namespace std;

class Stack
{
    vector<int> vstack;
public:    
    void push(int val)
    {vstack.push_back(val);}
    int size()
    {return vstack.size();}
    int pop()
    {
        int val = vstack.back();
        vstack.pop_back();
        return val;
    }
};

class TestStack : public testing::Test{
public:
    Stack s;
    void SetUp()
    {
        int initial[]={1,2,3,4,5,6,7};
        for(auto &val:initial)
        {   
            s.push(val);
        }
        cout<<"SetUp"<<endl;
    }
    void TearDown(){cout<<"TearDown"<<endl;}
};

TEST_F(TestStack, PopTest)
{
    ASSERT_EQ(s.pop(),7);
}

TEST_F(TestStack, SizeTest)
{
    ASSERT_EQ(s.size(),7);
}

