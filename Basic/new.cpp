#include<iostream>
#include<memory>
using namespace std;

int main()
{
   int *ptr;
   ptr=new int;
   *ptr=10;

   cout<<"Address: "<<ptr<<endl;
   cout<<"Value: "<<*ptr<<endl;


  return 0;
 }

/*
Address: 0x639369a8d2b0
Value: 10
*/


