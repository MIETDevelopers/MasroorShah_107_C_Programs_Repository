/*
Name: Masroor Hussain Shah
Program Purpose: To find out area of Circle, Rectangle and Square based on user choice
*/

#include <stdio.h> //Pre-process directive to include standard input and output functions header file
int main(){ //Main function
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle; //variable declaration using float datatype
// variable value declaration	
	raduisOfCircle=8; 
	sideOfSquare=10;  
	legthOfRectangle=7;
	breadthOfRectangle=5;
			//printf function calling
		printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
		printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));
		printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
		printf("\nPerimeter of Square: %f",(4*sideOfSquare));
		printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
		printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
return 0;  //return function
}








