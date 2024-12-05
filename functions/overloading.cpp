#include<iostream>
#include<string>
using namespace std;
 
 void add(int,int);
 void add(int,int,int);
 void add(int,double);

 int main()
 {
   add(2,3);
   add(2,3,4);
   add(3,10.4);

    return 0;
  }

  void add(int a,int b)
   {
    cout<<a+b<<endl;
   }
   void add(int a,int b,int c)
    {
	 cout<<a+b+c<<endl;
	}

   void add(int a,double b)
    {
	 cout<<a+b<<endl;
	}
