//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters and a reference.
	int func(int a, int b, int&c){
		if(c==1){
		//Give their sum.
		int sum = a + b;
		return sum;
		}
		if(c==2){
		//Give the larger
		if(a > b){
		return a;
		}
		else {
		return b;}
		}
 		if(c==3){
		//Give minimum.
		if (a < b){
		return a;
		}
		else {
		return b;}
		}
	}

//Main function
int main(){
	//Declare the variables
	int p, q, operation;
		//Asking for two numbers
		cout<< "Write the two numbers: ";
		cin >> p >> q;
		//Asking for operation choice
        cout << "Which operation do you want to perform?" <<endl
		<< "For sum type 1"<<endl
		<< "For maximum between two numbers type 2" <<endl
		<< "For minimum between two numbers type 3"<<endl;
		cin >> operation;

		//Print the value of the operations
		cout << "The value of the operation choosen with the numbers " << p << " and " << q <<" is: "<< 
		//Call function for numbers as arguments
        func(p, q, operation) <<endl;
		
return 0;
}
