#include<stdarg.h>
#include<iostream>
using namespace std;

template<typename T>
T summer(T v)
{
	return v;
}

template<typename T,typename ... Args>
T summer(T first,Args ... args)
{
	return summer(args ...) + first	;
}

int main()
{
	int result = summer(1,2,3,4,5,6,7,8,9,10);
	cout << "Result is:" << result<<endl;
	return 0;
} 