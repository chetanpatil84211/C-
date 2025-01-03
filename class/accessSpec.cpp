#include<bits/stdc++.h>

using namespace std;

class Geeks{
              private:
			     string geekname;

			  public:
			      void setName(string name)
				    {
					  geekname=name;
					}
			      void printname()
				   {
				     cout<<"Geekname is : "<<geekname<<endl;
					}
			};

	int main()
	{
	   Geeks obj1;
	  // obj1.geekname="Sham";

	  obj1.setName("Sham");
	  obj1.printname();


	   return 0;
	 }

//Geekname is : Sham

