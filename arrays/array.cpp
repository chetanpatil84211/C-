#include<iostream>
using namespace std;

 int main()
  {
    int array[]={2,4,6,8,10};

	 int size=sizeof(array)/sizeof(array[0]);

	  cout<<"size="<<size<<endl;
       
	    int sum=0;
	    for(int i=0;i<size;i++)
		 {
		   sum+=array[i];

		  }

	 cout<<"sum="<<sum<<endl;
	
	 return 0;
 }

