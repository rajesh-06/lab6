//UpperCase and LowerCase 

//Include the ibrery
#include<iostream>
using namespace std;

/*Write a function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.*/

void toUpper(char a){
	//Asking for character
        cout<< "Write a character in lowercase: "; 
        cin>> a;
        a = a-32;
        cout<< "The character in uppercase is: "<< a <<endl;
}
 		
void toLower(char a){
	//Asking for character
        cout<< "Write a character in uppercase: "; 
        cin>> a;
        a = a+32;
        cout<< "The character in lowercase is: "<< a <<endl;
} 

//Main function
int main(){
	//call by value
	int a;
		toLower(a);
	 	toUpper(a);
	 	  	
//Print the sum
return 0;
} 		
 		
