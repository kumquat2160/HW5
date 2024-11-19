#include <stdio.h>

// Recursive binary search function
int binarySearch(const int arr[], int start, int end, int key) {
    // Base case: if the range is invalid, return -1
    if (start > end) {
        return -1;
    }

    // Calculate the middle index
    int mid = start + (end - start) / 2;

    // Check if the middle element is the key
    if (arr[mid] == key) {
        return mid;
    }
    // If the key is smaller, search in the left subarray
    else if (key < arr[mid]) {
        return binarySearch(arr, start, mid - 1, key);
    }
    // If the key is larger, search in the right subarray
    else {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main() {
    // Example sorted array
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    // Input the key to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Call the binary search function
    int result = binarySearch(arr, 0, size - 1, key);

    // Output the result
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    }
    else {
        printf("Element not found.\n");
    }

    return 0;
}
