 #include<stdio.h>
void average(int, int, int ,int, int);
void main()
{
    int a,b,c,d,e;
    printf("\nGoing to calculate the average of five numbers");
    printf("\nEnter Five Numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
}
void average(int a, int b, int c, int d, int e)
{
  int avg;
    avg = (a+b+c+d+e)/5;
    printf("The average of given five numbers:%d",avg);
}