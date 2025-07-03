#include <stdio.h>


void calculateSum(int a, int b) {
    int sum = a + b; 
    printf("The sum of x + y is: %d\n", sum); 
}

int main() {
    int x; 
    int y; 
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y); 

    
    calculateSum(x, y);

    return 0;
}