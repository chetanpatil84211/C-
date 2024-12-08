#include<iostream>
using  namespace std;

 int main()
 {
   char name[20];

   cout<<"Ente a  name :";
//   cin>>name;
   cin.getline(name,20);
   cout<<name<<endl;


   return 0;
  }

