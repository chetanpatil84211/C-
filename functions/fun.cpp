#include<iostream>
using namespace std;
 
 int add(int num1,int num2)
  {
    int sum=num1+num2;
	 return sum;
  }
 
   int add(int num1,int num2,int num3)
    {
	  int sum=num1+num2+num3;
       return sum;
	}

   float add(float num1,float num2)
     {
	   float sum=num1+num2;
       return sum;
	  }

	 int main()
	 {
	 //  int a=5,b=4,c=10;

	   //cout<<add(a,b,c)<<endl;
	   float  c=3.4,d=4.6;
	   cout<<add(c,d)<<endl;

	   return 0;
   }
