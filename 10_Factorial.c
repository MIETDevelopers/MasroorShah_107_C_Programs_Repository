//Name: Masroor Hussain Shah	
//Program: Factorial Using ForLoop 


#include<stdio.h> ////Pre-process directive to include standard input and output functions header file
int main(){ //main function
 	int i,f=1,num; //interger variable's value declaration 
 	printf("Enter an integer"); //printf function calling
  	scanf("%d",&num); //scanf function calling
 //for loop from 1 upto num
  		for(i=1;i<=num;i++) 
      		f=f*i;
 
  		printf("Factorial of %d is: %d",num,f); //printf function calling
  return 0; //return functio 
}








