//Calculate sum of product of all pairs of array element

#include<iostream>
using namespace std;

  int main()
  { 
   int data[]={10,1,3,-4,7,5};
   int total=0;

     for(int i=0;i<6;i++)
	   {
	      for(int j=i+1;j<6;j++)
		    {
			  total+=data[i]*data[j];
			 }
		}

     cout<<"Total is: "<<total<<endl;

	return 0;
}
//Total is: 142
