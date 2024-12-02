#include<iostream>
using namespace std;

 int main()
   {
     int age;
	 cout<<"Enter a age : ";
	 cin>>age;

	 if(age<12)
	   {
	    cout<<"Child"<<endl;
	   }
	  else if(age>18)
	   {
	    cout<<"adult"<<endl;
	   }
	   else
	    {
		 cout<<"Teenger"<<endl;
		}

  return 0;
  }

