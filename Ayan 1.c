#include <stdio.h>

int main(){
    int i, n, sum = 0;
    printf("Enter a positive integer: ");
   
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; 
    }

    if (n < 0) { 
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of %d natural numbers: %d\n", n, sum);
    return 0;
}