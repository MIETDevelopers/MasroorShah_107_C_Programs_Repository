/*Naame: Masroor Hussain Shah
  Program: Check whether the number is armstrong or not using while loop
*/

#include<stdio.h>         //Pre-process directive to include standard input and output functions header file
int main(){              //Main function

	int n,num,r,ans=0;    // variable declaration
	printf("Enter a positive integer: ");    //Ask user to input positive number  
	scanf("%d", &num);
	n=num;
		while(n>0){            // Loop to calculate the sum of the cubes of its digits 

	r=n%10;
	ans=ans+r*r*r;
	n=n/10;
	}
 // if else condition to print Armstrong or Not
		if(ans==num)                
		printf("%d is an Armstrong number.",num);
		else
	printf("%d is not an Armstrong number.",num);
return 0;   // return function
}