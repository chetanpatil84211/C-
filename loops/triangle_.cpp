#include<iostream>
using namespace std;
 int main()
  {
    int n;
	cout<<"Ente a number :";
	cin>>n;

	     for(int i=1;i<=n;i++)
		   {
		     for(int j=1;j<=(n-i);j++)
			   {
			    cout<<" ";
			   }
			   for(int j=1;j<=i;j++)
			    {
				 cout<<j;
				}
			    for(int j=(i-1);j>=1;j--)
				 {
				  cout<<j;
				 }
			 
				cout<<endl;
		    }

	  return 0;
	 }
/*
Ente a number :8
       1
      121
     12321
    1234321
   123454321
  12345654321
 1234567654321
123456787654321
*/