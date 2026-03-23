#include <stdio.h>

int main() {
    int size, i, largest;

    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the specified size
    int array[size];

    // Input elements for the array
    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }

    // Initialize the 'largest' variable with the first element of the array
    largest = array[0];

    // Traverse the array starting from the second element (index 1)
    for (i = 1; i < size; i++) {
        // If the current element is greater than the current 'largest'
        if (array[i] > largest) {
            // Update 'largest' to the current element's value
            largest = array[i];
        }
    }

    // Print the final result
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
