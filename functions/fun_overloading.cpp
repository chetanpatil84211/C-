#include<iostream>
#include<string>
using namespace std;

void display(int);
void display(string);

 int main()
  {
     display(40);
	 display("Sunday");

	 return 0;
  }

   void  display(int a)
   {
     cout<<"Printing integer value:"<<a<<endl;

   }

  void display(string str)
   {
     cout<<"Printing string value:"<<str<<endl;
   }
