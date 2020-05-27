#include<stdio.h>
#include<iostream>

using namespace std;


int main()
{
	setenv("ASDF","123",1);
		
	string env = getenv("ASDF");
	int i = atoi(env.c_str());
	cout <<"Integer:" <<i<<endl; 
	
}
