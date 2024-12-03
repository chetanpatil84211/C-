//Sum of digit

#include<iostream>
using namespace std;

 int main()
  {
    int n,sum=0;
	cout<<"Ente a  number :";
	cin>>n;

	   while(n>0)
	     {
		   int digit=n%10;
		   sum+=digit;
		   n=n/10;
		  }
		 cout<<"sum is number is :"<<sum<<endl;
	
	return 0;
 }
                               
