/*[By Reference] Goal is the same as q4a, but this time, the function that finds the minimum of the two numbers should be the void, and takes a third, pass by reference parameter, then puts the minimum in this.
*/

//include library
#include <iostream>
using namespace std;

	//Functions with parameters and reference parameter.
	void funcR(int a, int b, int &c){
    	if (a < b)
    	{	
        c = a;
    	}
    	else {
        c = b;
		}
	}

//Main function
int main(){
	//Declare the variables     
	int p, q, min;
	//Asking for two numbers
    	cout << "Write two numbers: " ;
    	cin >> p >> q;
    	//call the arguments
    	funcR(p,q,min);
	//Print the smaller number
   	 	cout<<"The smaller of the two numbers " << p <<" and " << q <<" is: " << min << endl;
    	

return 0;
} 
