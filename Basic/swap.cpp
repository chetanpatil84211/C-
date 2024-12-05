#include<iostream>
using namespace std;

 int main()
 {
   int num1,num2;
   
    cout<<"Enter a num1 and num2:";
	cin>>num1>>num2;
	cout<<"num1 : "<<num1<<" "<<"num2 : "<<num2<<endl;

	 int temp=num1;
	 num1=num2;
	 num2=temp;
	
	cout<<"num1 : "<<num1<<" " <<"num2 : "<<num2<<endl;

	return 0;
 }
