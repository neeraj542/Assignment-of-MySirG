/*
4. Write a program to swap values of two int variables without using a third variable.
*/
int numSwap(int, int);
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    numSwap(a,b);
    return 0;

}

int numSwap(int X, int Y){
    X = X+Y;
    Y = X-Y;
    X = X-Y;

    printf("First number is: %d\nSecond Number is: %d",X,Y);
    return 0;
}
