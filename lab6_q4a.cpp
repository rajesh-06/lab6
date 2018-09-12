/* [By Value] Write a program where a function takes two int parameter, finds the minimum, then returns the minimum. The program should ask the user for 2 numbers, then call the function with the numbers as arguments, and tell the user the minimum.
*/ 

//Include the library 
#include<iostream> 
using namespace std;

	//Write a function that has two parameters
	int func(int a, int b){
		if (a < b){
		return a;
		}
		else {
		return b;
		}
	}
//Main function 
int main(){
	//Declare the variables
	int c, d;
		//Asking for two numbers 
		cout << "Write two numbers: " ;
		cin >> c >> d;
		//Print the smaller number
		cout << "The smaller of the two numbers " << c <<" and " << d <<" is: "
		//Call the functions for the numbers as arguments 
		<< func (c,d) <<endl;

return 0;
}
