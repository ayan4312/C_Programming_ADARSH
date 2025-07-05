#include <stdio.h>
void sum ();
void sum()
{
    int  a,b;
    printf("\n enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("the sum is %d",a+b);
}
void main()
{
    printf ("\ngoing to calculate the sum of two numbers:");
    sum();
    
}
