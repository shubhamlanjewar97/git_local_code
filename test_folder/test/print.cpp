#include<stdio.h>
#include<iostream>

using namespace std;


int main()
{
//	setenv("ASDF","123",1);

	if(getenv("ASDFG") != NULL)
	{		
		string env = getenv("ASDFG");
		int i = atoi(env.c_str());
		cout <<"Integer:" <<i<<endl; 
	}
}
