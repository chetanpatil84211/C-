#include<iostream>
using  namespace std;

int main()
 {
    int n,sum=0;
	cout<<"Enter a number : ";
	cin>>n;

	int i=1;
	while(i<=n)
	  {
	    sum+=i;
		i++;
       }

	cout<<"sum is : "<<sum<<endl;

    return 0;
  }
