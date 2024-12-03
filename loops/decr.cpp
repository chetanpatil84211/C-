#include<iostream>
using namespace std;

 int main()
 
  {      
         int n;
         cout<<"Enter a n : ";
      
         cin>>n;
         int a=n;
         for(int i=1;i<=n;i++)
           {
                for(int j=1;j<=a;j++)
               {
                 cout<<"* ";  
               }
               cout<<endl;
               a--;
           }
       
       
       return 0;
  }
