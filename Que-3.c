//3. Write a program to swap values of two int variables

#include<stdio.h>

int main(){
    int a=2, b=4,temp=0;
    temp = a;
    a = b;
    b = temp;
    printf("a= %d and b= %d",a,b);
    
    return 0;
}
