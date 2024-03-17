#include <stdio.h>
#include <stdlib.h>

/* Reverse the array with recursive function*/

void reverseArray(int arr[], int start, int end){
    
    if (start >= end) // Base case: if start index is greater than or equal to end index, return
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

   
    reverseArray(arr,start+1,end-1);
}

int main() {
	
    int n,arr[n],i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    
    printf("Enter the elements of the array:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    reverseArray(arr,0,n-1);

    printf("Array after reversing:");
    
    for (i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
