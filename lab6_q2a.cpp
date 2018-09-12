/* [By Value] Write a program with a function that takes two int parameters, add them together, then returns the sum. The program should ask the user for two numbers, then call the functions as arguments, and tell the user the sum.*/

//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters.
	int func(int a, int b){
		//Give their sum.
		int sum = a + b;
		return sum;
	}

//Main function
int main(){
	//Declare the variables
	int c,d;
		//Asking for two numbers.
		cout << "write two numbers: ";
		cin >> c >> d;
		//Print the sum
		cout << "The sum of the numbers " << c << " and " << d <<" is "<< 
		//Call function for numbers as arguments
        func(c,d) <<endl;
		
return 0;
}
