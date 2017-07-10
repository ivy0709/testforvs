#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;


void fun1(int & a)
{
	a = 1;
}
void fun1(int)
{
	int a = 1;
}
int main()
{
	int a = 1;
	int& b = a;
	fun1(b);
	fun1(a);
	return 0;
}