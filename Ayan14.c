#include <stdio.h>


int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (high + low) / 2;

      
        if (arr[mid] == key)
            return mid;

        
        if (arr[mid] < key)
            low = mid + 1;

      
        else
            high = mid - 1;
    }

    
    return -1;
}

int main() {
    int arr[] = {2, 4, 7, 10, 15, 20, 25, 30}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}
