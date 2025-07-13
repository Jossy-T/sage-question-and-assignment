#include<iostream>
using namespace std;

int main(){
	double num;
	cout<<"enter the number to check"<<endl;
	cin>>num;
	
	if(num<0)
	{cout<<num<<" is negative."<<endl;}
	
	else if(num>0)
	{cout<<num<<" is positive."<<endl;}
	
	else
	{cout<<num<<" is zero"<<endl;}
	return 0;
}