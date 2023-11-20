//Scenario
//Write a program that takes one floating - point number, converts it to an integer number, and then prints a description of the given number.Descriptions for numbers:
//numbers greater than or equal to 1 and less than 2 - Very bad.
//numbers greater than or equal to 2 and less than 3 - Bad.
//numbers greater than or equal to 3 and less than 4 - Neutral.
//numbers greater than or equal to 4 and less than 5 - Good.
//numbers greater than or equal to 5 and less than 6 - Very good.
//When a number is out of the given range(1 <= x < 6), the program should print nothing.
//Your version of the program must print the same result as the expected output.
//
//Sample Input
//1.5
//
//Expected output
//Very bad
//
//Sample Input
//2.9
//
//Expected output
//Bad
//
//Sample Input
//4.77
//
//Expected output
//Good
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	float var=0;
	scanf_s("%f", &var);
	int var2 = (int)var;
	if		(var >= 1 && var < 2) printf("Very bad");
	else if (var >= 2 && var < 3) printf("Bad");
	else if (var >= 3 && var < 4) printf("Neutral");
	else if (var >= 4 && var < 5) printf("Good");
	else if (var >= 5 && var < 6) printf("Very good");
	return 0;
}
