/*
2. Write a program to print a given number without its last digit.
*/

#include<stdio.h>
int main(){

    int number;
    printf("Enter any number to print this without it's last digit: ");
    scanf("%d",&number);

    int digit = number/10;

    printf("%d without last digit is: %d",number,digit);
    return 0;
}
