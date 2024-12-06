#include<iostream>
using namespace std;

  int main()
  {
    int arr[]={2,7,11,15};
	 
	 int size=sizeof(arr)/sizeof(arr[0]);
	 cout<<"size="<<size<<endl;

	 int target=18;

	  for(int i=0;i<size;i++)
	     {
		   for(int j=i+1;j<size;j++)
		     {
			   if(arr[i]+arr[j]==target)
			       {
				     cout<<"i="<<i<<" "<<"j="<<j<<endl;
					  break;
					}
			  }
	      }


  return 0;
 }
