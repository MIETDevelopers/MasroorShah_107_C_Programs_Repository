/*Name: Masroor Hussain Shah
Program: Maximum of n numbers using for loop
*/
#include <stdio.h>   //Pre-process directive to include standard input and output functions header file
int main(){           //Main function

  int i,num,n,large=0;   // variable declaration with datatype int
  //Printf and Scanf function calling
  printf("How many numbers: ");
  scanf("%d",&n);
 
    //ForLoop to store largest number
  
  for(i=0; i<n; i++){
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\n\nThe Largest Number is %d",large);    //printf function calling for largest number
  return 0;       // return 0 to oprerating system
}