 #include<stdio.h>
float square();
void main()
{
    printf("Going to calculate the area of the square\n");
    float area = square();
    printf("The area of the square: %f\n", area);
}
float square()
{
    float side;
    printf("Enter the lenght of the side in meters:");
    scanf("%f",&side);
    return side * side;
}