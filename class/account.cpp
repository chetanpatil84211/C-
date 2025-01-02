#include<iostream>
#include<string>
using namespace std;

 class Account{  
                 public:
                 //Attributes
                 string name;
				 double balance;
				 //methods
				 void deposit(double amount) {
				               balance+=amount;
							   cout<<"Update balance is:"<<balance<<endl;
							     }
				 void  withdraw(double amount){
				               balance-=amount;
							   cout<<"Balance is :"<<balance<<endl;
							   }
							     
				};

	int main()
	 {
	   Account ashu_account;
	   ashu_account.name="Ashitosh";
	   ashu_account.balance=5000.0;
	   ashu_account.deposit(1000.0);
	   ashu_account.withdraw(500.50);
	   



	   return 0;
	  }



