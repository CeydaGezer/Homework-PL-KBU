#include <stdio.h>
#include <stdlib.h>

// This code aims to copy a string (stng1) into another string (stng2) recursively.

void copyString(char stng1[], char stng2[], int ctr) {
    stng2[ctr] = stng1[ctr];
      
    if (stng1[ctr] == '\0') // If the current character is null terminator, return
        return;
    
    copyString(stng1, stng2, ctr + 1);
}


int main() {
    char stng1[20], stng2[20];
 
    printf(" Input the string to copy: ");
    gets(stng1);
    
    copyString(stng1, stng2, 0);
    
    printf(" The first string is: %s\n", stng1);
    printf(" The copied string is: %s\n\n", stng2);
    
    return 0;
}


