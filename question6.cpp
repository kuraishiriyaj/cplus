#include<iostream>
/* write a c++ program to calculate average of 3 numbers ?
*/
using namespace std;
int main()
{
  int a,b,sum=0,average=0;
  cout<<"enter is the two number a& b"<<endl;
  cin>>a>>b;
  sum=a+b;
  average=sum/2;
  cout<<"average of the two number"<<a<<"and"<<b<<"="<<average;
  return 0;
}