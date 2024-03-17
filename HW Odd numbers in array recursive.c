#include <stdio.h>
#include <stdlib.h>

// This code aims to find and print all odd numbers from a given array.

void findOdd(int arr[], int size, int index) {
    
    if (index >= size) {
        return;
    }

    
    if (arr[index]%2!=0) {
        printf("%d ",arr[index]);
    }
    
    findOdd(arr, size, index + 1);
}

int main(){
    int arr[100],size,i;

    printf("Dizinin boyutunu girin:");
    scanf("%d", &size);

    printf("Dizinin elemanlarýný girin:");
    for (i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Tek sayilar:");
    findOdd(arr, size, 0);

    return 0;
}
