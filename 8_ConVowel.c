//Masroor Shah
//Program: Check whether alphabet is vowel or consonant

#include <stdio.h> //Pre-process directive to include standard input and output functions header f
int main(){ //main function
   char c; //variable declaration with data type char
   printf("Enter character\n"); //printf function calling
   scanf("%c",&c); //scanf function calling
     //variable definition using switch case for both uppercase and lowercase variable "c"
      switch(c){  
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
         printf("%c is a vowel",c); //printf function calling
      break; 
      //if variable doesn't match any case variable 
      default:
         printf("%c is a consonant",c);
            break;
}  
return 0; //return function
}