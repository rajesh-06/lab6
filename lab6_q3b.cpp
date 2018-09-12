/* 
[By Reference] Goal is the same as q3a, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in this.
*/
 
//Include the Library
#include<iostream>
using namespace std;

	//Functions with parameters and reference parameter.
	void funcR(int a, int b ,int &c){
		if(a > b){
		c = a;
		}
		else {
		c = b;
		}
	}

//Main function
int main(){
	//Declare the variables	
	int p, q, max;
		//Asking for two numbers
		cout << "Write two numbers: ";
		cin >> p >> q;
		//Call the arguments
		funcR(p, q, max);
		//Print the larger number
		cout << "The larger of the two numbers "<< p << " and " << q <<" is: "<< max << endl;
		

return 0;
}
