#include<iostream>
#include<string>

using namespace std;

//define class named Person

  class Person {
                 public:
				       //Data members
					   string name;
					   int age;

					   //member function to introduce the person
					   void introduce()
					    {
						 cout<<"Hi, my name is "<<name<<" and I am "<<age<<" years old."<<endl;
						 }
				 };

	 int main()
	 {
	   	//create an object of Person class
		Person person1;

		//accessing data members
		person1.name="Chetan";
		person1.age=24;
		person1.introduce();

	return 0;
  }

//Hi, my name is Chetan and I am 24 years old.
