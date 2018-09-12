//Sum of even and odd

//Include the library
#include<iostream>
using namespace std;

//Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value.

int sumEvenNumbers (int firstNum, int secondNum, int sumEven) {
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2 == 0){
			sumEven = sumEven+n;
		}
	}
	return sumEven;
}

/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value*/

int sumOddNumbers (int firstNum, int secondNum, int sumOdd) {
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2 != 0){
			sumOdd = sumOdd+n;
		}
	}
	return sumOdd;
}

/*Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. */

int sumSquareOddNumbers (int firstNum, int secondNum, int sumSqOdd) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2!=0){
		sumSqOdd = sumSqOdd+n*n;
		}
	}
	return sumSqOdd;
}


/*Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. */

int sumSquareEvenNumbers (int firstNum, int secondNum, int sumSqEven) {
	
	for ( int n = firstNum; n <= secondNum; n++){
		if(n%2==0){
		sumSqEven = sumSqEven+n*n;
		}
	}
	return sumSqEven;
}

/*Write a main program. 
	a.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
	b.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
	c.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
	d.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
	e.Then display the values
*/

int main(){
	//Declare the variables icluding sumEven, sumOdd, sumSqOdd, sumSqEven
	int a, b, c = 0, sumEven, sumOdd, sumSqOdd, sumSqEven;
		//Asking for two numbers
		cout<< "Write two numbers: ";
		cin >> a >> b;
		//sumEvenNumbers
		sumEven=sumEvenNumbers(a,b,c);
		//Print the sum
		cout<<"The sum of the even numbers: "<< sumEven << endl;
		//sumOddNumbers  
		sumOdd=sumOddNumbers(a,b,c);
		//Print the sum
		cout<<"The sum of the odd numbers: "<< sumOdd << endl; 
		//sumSquareOddNumbers
		sumSqOdd=sumSquareOddNumbers(a,b,c);
		//Print the sum
		cout<<"The sum of the square of the odd numbers: "<< sumSqOdd << endl;  
		//sumSquareEvenNumbers
		sumSqEven=sumSquareEvenNumbers(a,b,c);
		//Print the sum
		cout<<"The sum of the square of the even numbers: "<< sumSqEven << endl; 
	
        		
return 0;
}
