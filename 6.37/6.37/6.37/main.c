#include <stdio.h>

// Recursive function to find the maximum value in an array
int recursiveMaximum(const int arr[], int size) {
    // Base case: If the array has only one element, return it
    if (size == 1) {
        return arr[0];
    }

    // Recursive case: Find the maximum in the rest of the array
    int maxOfRest = recursiveMaximum(arr, size - 1);

    // Compare the last element with the maximum of the rest
    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
}

int main() {
    int arr[100], size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursiveMaximum function
    int max = recursiveMaximum(arr, size);

    // Output the maximum value
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
