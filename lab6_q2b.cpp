/*
 [By Reference] Goal is the same as q2a, but this time, the function that adds the numbers should be void, takes a third, pass by reference parameter; then puts the sum in this.
*/

//Include the Library
#include<iostream>
using namespace std;

	//Functions with parameters and reference parameter.
	void funcR(int a, int b ,int &c){
		//give their sum
		c = a + b;
	}

//Main function
int main(){
	//Declare the variables.	
	int p, q, sum;
		//Asking for two numbers.
		cout << "Write two numbers: ";
		cin >> p >> q;
		//Call the arguments.
		funcR(p,q,sum);
		//Print the sum.
		cout << "The sum of the numbers "<< p << " and " << q <<" is "<<  sum << endl;
	
       
return 0;
}
