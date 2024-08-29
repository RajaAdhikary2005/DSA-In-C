#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int size, target;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element to search
    printf("Enter the target element: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result+1);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
