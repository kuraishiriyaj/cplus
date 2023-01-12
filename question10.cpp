#include<iostream>
/* write a c++ program to add all the numbers of an array of size 10?
*/
using namespace std;
int main()
{
     int a[10];int sum=0;
    
   for(int i=0;i<10;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<10;i++)
   {
     sum=sum+a[i];
   }
   cout<<"add number of size 10 is"<<sum;
   return 0;

}