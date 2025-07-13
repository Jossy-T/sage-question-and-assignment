#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"Enter the number to check day."<<endl;
	cin>>num;
	
	switch(num){
		case 1:
		cout<<" It's Monday"<<endl;
		break;
		
		case 2:
		cout<<" It's Tuesday"<<endl;
		break;
		
		case 3:
		cout<<" It's Wednesday"<<endl;
		break;
		
		case 4:
		cout<<" It's Thursday"<<endl;
		break;
		
		case 5:
		cout<<" It's Friday"<<endl;
		break;
		
		case 6:
		cout<<" It's Saturday"<<endl;
		break;
		
		case 7:
		cout<<" It's Sunday"<<endl;
		break;
		
		 default:
            cout << "Error: Invalid Number!" << endl;
}

return 0;

}