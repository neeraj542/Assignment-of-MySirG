/*
1. Write a program to print unit digit of a given number.
*/

#include <stdio.h>
#include <conio.h>

int main() {
    // Write C code here
    int num1, num2;
    printf("Enter any number: ");
    scanf("%d",&num1);
    
    num2 = num1%10;
    
    printf("Unit digit of %d is %d",num1,num2);

    return 0;
}
