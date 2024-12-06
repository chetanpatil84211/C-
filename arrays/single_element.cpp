//single element in Array

 #include<iostream>
 using namespace std;

  int main()
  {
    int nums[5]={4,1,2,1,2};
	int ans=0;

	  for(int i=0;i<5;i++)
	    {
		  ans=ans^nums[i];
		 }

	  cout<<"ans:"<<ans<<endl;

	 return 0;

   }

   //ans:4
