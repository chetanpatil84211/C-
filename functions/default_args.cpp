#include<iostream>
using namespace std;
int sum(int ,int ,int =0);

 int main()
  {
    cout<<sum(1,2,3)<<endl;
	cout<<sum(1,5)<<endl;
	cout<<sum(3,4)<<endl;

  return 0;
   }

  int sum(int x,int y,int z)
    {
	 return x+y+z;
	}
	/*
	6
    6
    7
	*/
	/*
default_args.cpp:8:18: error: too few arguments to function ‘int sum(int, int, int)’
    8 |         cout<<sum(1)<<endl;
      |               ~~~^~~
default_args.cpp:3:5: note: declared here
    3 | int sum(int ,int ,int =0);
    */

