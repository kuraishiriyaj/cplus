#include<iostream>
/*
   write a c++ program to swap values of two int variables
   without using third variable?
*/
using namespace std;
int main()
{
 int a,b;
 cout<<"enter is the two number a&b"<<endl;
 cin>>a>>b;

 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"swap of the two number is"<<a<<"and"<<b;
 return 0;
}