//#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;
/*
class DataBaseConnect{
public:
    virtual bool login(string username,string password)
    {return true;}
    virtual bool logout(string username)
    {return true;}
    virtual int fetchRecord()
    {return -1;}
};
*/

class DataBaseConnect //: public DataBaseConnect
{
public:
    MOCK_METHOD0(fetchRecord,int());
    MOCK_METHOD1(logout,bool(string username));
    MOCK_METHOD2(login,bool (string username,string password));
};

class MyDataBase{
    DataBaseConnect & dbC;
public:
    MyDataBase(DataBaseConnect & dbCarg):dbC(dbCarg){}
    int  Init(string username,string password)
    {
        if(dbC.login(username,password) != true)
        {
            cout <<"DB FAILURE"<<endl;
            return -1;
        }
        else
        {
            cout <<"DB SUCCESS"<<endl;
            return 1; 
        }
    }
};

TEST(MyDBTest,LoginTest)
{
    //arrange
    DataBaseConnect mdb;
    MyDataBase db(mdb);

    EXPECT_CALL(mdb,login(_,_))
    .Times(1)
    .WillOnce(Return(true));

    //act
    int retval = db.Init("terminator","hithere");
    //assert
    // cout <<"Answer:"<<retval<<endl;
    EXPECT_EQ(retval,1);
}


TEST(MyDBTest,LoginFailure)
{
    //arrange
    DataBaseConnect mdb;
    MyDataBase db(mdb);

    EXPECT_CALL(mdb,login(_,_))
    .Times(1)
    .WillOnce(Return(false));

    //act
    int retval = db.Init("terminator","hithere");
    //assert
    // cout <<"Answer:"<<retval<<endl;
    EXPECT_EQ(retval,-1);
}


/*
.WillOnce(Invoke(&obj,&obj::fun));

WillOnce(InvokeWithoutArgs(DummyFun));
*/