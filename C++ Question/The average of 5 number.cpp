#include<iostream>
using namespace std;

int main(){
	double num[5];
	double sum;
	sum=0;
	double average;
		cout<<"enter 5 numbers to get their average"<<endl;
 	
 	for(int i=0;i<5;i++){
 		
 		cin>>num[i];
 		sum=sum + num[i];
 		average=sum/5;
	 }
	 
	 cout<<"The average of five numbers is: "<<average<<endl;
return 0;
}