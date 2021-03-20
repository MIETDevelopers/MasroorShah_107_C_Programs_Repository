//Name:Masroor Hussain Shah
//Program: To find max element and index in array



#include<stdio.h>  //Pre-process directive to include standard input and output functions header file
int main(){ 	   //Main function
	int i;			//varialble declaration
	float arr[5];   //array declaration

	printf("Please enter five numbers:\n "); //Printf function calling

//declaration of a for loop to find the max element and index
	
	for (i = 0; i < 5; ++i){
    	scanf("%f", &arr[i]);
	}

		for (i = 1; i < 5; ++i){
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]); 	//Printf function calling

	return 0; 	//return function
	}