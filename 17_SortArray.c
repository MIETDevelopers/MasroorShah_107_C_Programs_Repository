/*Name:Masroor Hussain Shah
Program: Sorting an array using insertion sort
*/


#include <stdio.h>    //Pre-process directive to include standard input and output functions header file
int main(){        //Main function
    int n, i, j, temp; //variable declaration with a temp variable(datatype int)
    int arr[64];    //array declaration
    //This will determine the limit of values according to user input.
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++){   //Using for loop.
    
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j]){ 
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //This will give us a sorted array
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++){
        printf("%d\n", arr[i]);
    }
    return 0;  //return function
}