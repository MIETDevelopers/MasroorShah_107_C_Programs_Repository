//Masroor Shah
//Program: Check whether an entered number is even or odd

#include<stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){  //main function
	int number;  //variable delaration with data type int
	printf("Enter a number: "); //printf function calling
	scanf("%d", &number); //scanf function calling to receive input
	if (number%2==0){ //declaration of if else statement
		printf("%d is even", number); //if  the remainder of a number is 0 after dividing with two, print even
	}
	else{
		printf("%d is odd", number); //if  the remainder of a number is not 0 after dividing with two, print dd
	}
	return 0; //return function
}