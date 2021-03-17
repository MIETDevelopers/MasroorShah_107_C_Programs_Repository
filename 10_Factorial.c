//Masroor Shah	
//Factorial Using ForLoop 


#include<stdio.h>
int main(){
 	int i,f=1,num;
 	printf("Enter an integer");
  	scanf("%d",&num);
 
  		for(i=1;i<=num;i++)
      		f=f*i;
 
  		printf("Factorial of %d is: %d",num,f);
  return 0;
}








