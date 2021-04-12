 //Name: Masroor Hussain Shah 
//Program: Swap two numbers using call by value. ()        
 
#include<stdio.h>  //Pre-process directive to include standard input and output functions header file
void swap(int, int);
int main(){
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);//Taking input from user.
    swap(a,b);
}
//Here swapping exists.
void swap (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}