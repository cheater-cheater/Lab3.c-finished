// Charles M Heater
//CPSC 1011, Lab Section 002, Spring 2025
//01/28/25
// returns the ASCII table equivilent of the value entered


#include <stdio.h>
#include <math.h>
int main() {
	fprintf(stderr,"Enter any character: \n"); //prompt user for input
	char ch; //create a variable to represent what the user enters
	scanf("%c",&ch); //retreives the user input
	double sqch; //makes a new variable to represent the squared value
	printf("The decimal value of %c is: %d\n",ch,ch); //prints the value
	sqch = sqrt(ch); //set new variable as square root of the ASCII value
	printf("The square root of %d is: %.1lf\n",ch,sqch);
	int decsqch =(int)sqch; //variable to represent decimal place
	printf("PI printed to %d decimal places is:  %.*lf\n",decsqch,decsqch,M_PI); //prints PI to calculated decimal place
	return 0; //ends program
}

