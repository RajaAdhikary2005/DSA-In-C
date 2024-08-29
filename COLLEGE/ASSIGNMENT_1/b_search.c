#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int l = 0, u = size - 1;

    while (l <= u) {
        int mid = (l + u ) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If the target is greater, ignore the left half
        if (arr[mid] < target) {
            l = mid + 1;
        } else {
            // If the target is smaller, ignore the right half
            u = mid - 1;
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

    // Input array elements (ensure they are sorted)
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element to search
    printf("Enter the target element: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result+1);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
