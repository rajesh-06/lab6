/*[By Value] Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
*/

//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters
	int func(int a, int b){
		if(a > b){
		return a;}
		else {
		return b;}
	}

//Main function
int main(){
	//Declare the variables
	int c, d;
		//Asking for two numbers
		cout<< "Write two numbers: ";
		cin >> c >> d;
		//Print the larger number
		cout << "The larger of the two numbers " << c << " and " << d <<" is: "<< 
		//Call function for numbers as arguments
        func(c,d) <<endl;
		
return 0;
}
