#include<iostream>
using namespace std;
 
 int main()
 {
       int row,column;
	   cout<<"Enter row and column: ";
	   cin>>row>>column;
       cout<<"row is :"<<row<<endl;
	   cout<<"column is :"<<column<<endl;


      for(int i=1;i<=row;i++)
        {
          for(int j=1;j<=column;j++)
            {
              if(i==1||i==row)
                {
                  cout<<j;
                }
                
                else if(j==1|| j==column)
                 {  
                    if(j==1)
                    cout<<"1";
                    else
                    cout<<"6";
                 }
                 else
                {
                  cout<<" ";
                }
            }
            cout<<endl;
        }
   
   return 0;
 }

 /*

row is :6
column is :7
1234567
1     6
1     6
1     6
1     6
1234567
*/

