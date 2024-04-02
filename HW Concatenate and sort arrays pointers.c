#include <stdio.h>
#include <stdlib.h>

/* Concatenate and sort two arrays using pointers in C. */

int *func(int *array1,int *array2,int size1,int size2){
    int i,j,k;
    
    int *result=(int *)calloc(size1+size2,sizeof(int));
    if (result==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    
    for (i=0; i<size1;i++){ // Copy elements from array1 to result array
        result[i]=array1[i];
    }
    
    
    for (j=0;j<size2;j++){ // Copy elements from array2 to result array
        result[i+j]=array2[j];
    }
    
    for (i=0;i<size1+size2-1;i++){
        for (j=0;j<size1+size2-i-1;j++){
            if (result[j]>result[j+1]) {
                int temp=result[j];
                result[j]=result[j+1];
                result[j+1]=temp;
            }
        }
    }
    
    return result;
}

int main() {
    int i,size1,size2;
    int *ptr,*array1,*array2;
    
    printf("Enter the number of elements for array1: ");
    scanf("%d",&size1);
    array1=(int *)calloc(size1, sizeof(int));
    if (array1==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Enter %d elements for array1:\n", size1);
    for (i=0; i<size1;i++) {
        scanf("%d",&array1[i]);
    }
    
    printf("Enter the number of elements for array2: ");
    scanf("%d",&size2);
    array2 = (int *)calloc(size2, sizeof(int));
    if (array2 == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Enter %d elements for array2:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }
    
    ptr=func(array1, array2, size1, size2);
    
    printf("Concatenated and sorted array:\n");
    for (i=0;i<size1+size2;i++){
        printf("%d ",ptr[i]);
    }
    
    free(array1);
    free(array2);
    free(ptr);
    
    return 0;
}
