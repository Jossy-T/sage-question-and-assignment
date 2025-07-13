#include<iostream>
using namespace std;  

double Even()
/*the bracket is to write the parameter*/
{
	int x;
	
	cin>> x;
	if (x % 2 == 0){
		cout<<"true(even)"<<endl;
	}
	else {
		cout<<"false(odd)"<<endl;
	}
	
	return 5;
}

int main(){
	
	cout<<"Enter a number to know it's EVEN or ODD'."<<endl;
		
	Even();
	
return 0;
}