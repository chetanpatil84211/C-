#include<iostream>

 using namespace std;

 class temp{
              int a;
			  int b;
			 public:
			         int solve(int intput)
					  {
					    a=intput;
						b=a/2;
						return b;
					  }
			 };

	int main()
	 {
	     int n;
		 cin>>n;
		 temp half;
		 int ans=half.solve(n);
		 cout<<ans<<endl;

	 return 0;
	 }
