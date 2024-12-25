#include<iostream>
using namespace std;

 int main()
 {
    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	int total_element=sizeof(array)/sizeof(array[0][0]);

	 cout<<"Total element in array :"<<total_element<<endl;


	 return 0;

	 }

//Total element in array :12
