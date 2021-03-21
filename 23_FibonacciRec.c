//Name: Masroor Hussain Shah
//Program: Print Fibonacci series using recursion.(Yet to understand this program) 			

#include<stdio.h>    
int main(){    
	int n1=0,n2=1,n3,i,number;    
	printf("Enter the number of elements: ");    
	scanf("%d",&number);    
	printf(" %d %d",n1,n2);//Printing 0 and 1.   
	for(i=2;i<number;++i){			//need to understand this program
			n3=n1+n2;    //This will give output.
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0;  
}
