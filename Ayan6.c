#include<stdio.h>
void sum();
void sum()
{
    int a,b;
    printf("\n Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("The sum is %d", a+b);
}
void main(){
    printf("\nGoing to calculate the sum of two numbers:");
    sum();
}