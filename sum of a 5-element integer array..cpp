#include<iostream>
using namespace std;

int main(){
	double num[5];
	double sum;
	sum=0;
		cout<<"enter 5 numbers"<<endl;
 	
 	for(int i=0;i<5;i++){
 		
 		cin>>num[i];
 		sum=sum + num[i];
	 }
	 
	 cout<<"The sum of five numbers is: "<<sum<<endl;
return 0;
}