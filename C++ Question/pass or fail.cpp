#include<iostream>
using namespace std;

int main(){
	double num;
	cout<<"enter the mark to check "<<endl;
	cin>>num;
	
	if((num >= 50 && num <= 100))
	{cout<<num<<" pass."<<endl;}
	
	else if(num >= 0 && num <= 49)
	{cout<<num<<" is fail"<<endl;}
	
	else
	{cout<<"The entered value is incorrect!";}
	return 0;
}