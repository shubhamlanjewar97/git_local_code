#include<iostream>
using namespace std;


class Base{
public:
	int a = 0;
	int b = 5;
};

class Derived :public Base
{
public:
	int c = 1;
};

int main()
{
	Derived d;
	cout <<"a:"<<d.a<<endl;
	cout<<"b:"<<d.b<<endl;
}
