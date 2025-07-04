#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int data[] = {10, 23, 45, 70, 11, 15};
    int size = sizeof(data) / sizeof(data[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = linearSearch(data, size, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}