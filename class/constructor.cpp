#include<iostream>
#include<string>

using namespace std;

 class Teacher{
                private:
				    double salary;
                       
				public:
				   
				     Teacher()
					           {
							      cout<<"Hi , I am constructor\n";
							   }

				     string name;
				     string dept;
					 string subject;

				void changeDept(string newDept)
				        {
						  dept=newDept;
						 }
				void setSalary(double s)
				       {
					     salary=s;
						}
				double getSalary()
				     {
					   return salary;
					  }
		};

int main()
{
  Teacher t1;//constructor call
  t1.name="sir";
  t1.subject="C++";
  t1.dept="Computer Science";
  t1.setSalary(25000);

  cout<<t1.name<<endl;
  cout<<t1.getSalary()<<endl;
   
   Teacher t2;
   Teacher t3;

  return 0;
 }

//Output
/*
Hi , I am constructor
sir
25000
Hi , I am constructor
Hi , I am constructor
*/
