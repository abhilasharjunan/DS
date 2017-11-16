#include <iostream>
#include <stdio.h>
using namespace std;

void fun(int *ptr)
{
 cout << ptr [0] << endl; 
 cout << ptr [1] << endl; 
 cout << ptr [2] << endl; 
 
}

int main()
{
 int a[3] = { 2,4,5 } ;
 int *ptr = a;
 cout << ptr [0] << endl; 
 cout << ptr [1] << endl; 
 cout << ptr [2] << endl; 
 fun(ptr);
 return 0;
}
