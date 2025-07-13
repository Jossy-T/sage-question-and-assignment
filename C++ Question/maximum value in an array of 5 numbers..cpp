#include<iostream>
using namespace std;

int main(){
	double numbers[5];
	double maximum;
	
		cout<<"enter the numbers to get the maximum value"<<endl;


    for (int i = 0; i < 5; i++) {
    	 cout << "Number " << i + 1 << ": ";
    	  cin >> numbers[i];
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    cout << "The maximum number is: " << maximum << endl;

    return 0;
}
