#include <stdio.h>
#include <stdlib.h>

/* Concatenate and sort two arrays using pointers in C. */

int *func(int *array1, int *array2, int size1, int size2) {
    int i, j;
    // Allocate memory for the result array
    int *result = (int *)malloc((size1 + size2) * sizeof(int));
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    // Copy elements from array1 to result array
    for (i = 0; i < size1; i++) {
        result[i] = array1[i];
    }
    
    // Copy elements from array2 to result array
    for (j = 0; j < size2; j++) {
        result[size1 + j] = array2[j];
    }
    
    // Sort the result array using bubble sort algorithm
    for (i = 0; i < size1 + size2 - 1; i++) {
        for (j = 0; j < size1 + size2 - i - 1; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
    
    return result;
}

int main() {
    int i;
    int array1[] = {6, 19, 78, 9, 65};
    int array2[] = {12, 34, 5, 65, 68, 50, 48, 93};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int *ptr;
    
    ptr = func(array1, array2, size1, size2);
    
    printf("Concatenated and sorted array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    
    // Free dynamically allocated memory
    free(ptr);
    
    return 0;
}

