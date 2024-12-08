#include<iostream>
#include<cstring>
using namespace std;

  int main()
   {
     char f_name[20];
	 char l_name[20];
	 char full_name[50];

	 cout<<"Enter your first name:";
	 cin>>f_name;

	 cout<<"Enter your last name:";
	 cin>>l_name;

	 cout<<"Hi "<<f_name<<" your first name has "<<strlen(f_name)<<" character"<<endl
	  <<"and your last name has "<<strlen(l_name)<<" character"<<endl;


	   strcpy(full_name,f_name);
	   strcat(full_name," ");
	   strcat(full_name,l_name);

	   cout<<full_name<<endl;


return 0;
}
/*
Enter your first name:Chetan
Enter your last name:Patil
Hi Chetan your first name has 6 character
and your last  name has  5 character
Chetan Patil
*/
