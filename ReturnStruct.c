/*
Name: Masroor Hussain Shah
Program purpose: To demonstrate function implementation which returns a structure
*/

#include<stdio.h>  //Pre-process directive to include standard input and output functions header file

/*
structure is defined above all functions so it is global.
*/

struct student
{
    char name[20];
    int roll_no;
    int marks;
};

void print_struct(char name[], int roll_no, int marks);  //declaration

int main()   //main function
{
    struct student stu = {"Kim", 1, 78};  
    print_struct(stu.name, stu.roll_no, stu.marks);
    return 0;  //return function
}

void print_struct(char name[], int roll_no, int marks)
{
    printf("Name: %s\n", name);   //printf function calling
    printf("Roll no: %d\n", roll_no);
    printf("Marks: %d\n", marks);
    printf("\n");
}