#include<iostream>
#include"message.hpp"

using namespace std;

void message::printout()
{
	cout <<"Makefile test programe2!"<<endl;
}

message::message()
{

	cout <<"constructor"<<endl;
}
message::~message()
{

	cout <<"destructor"<<endl;
}