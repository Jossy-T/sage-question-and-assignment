#include<iostream>
using namespace std;  

double square()
/*the bracket is to write the parameter*/
{
	double x, y;
	
	cin>> x;

	y =(x)* x;

	cout<<"The square of "<< x <<" is: "<< y <<endl;
}

int main(){
	
	cout<<"Enter a number to get it's square."<<endl;
		
	square();
return 0;
}