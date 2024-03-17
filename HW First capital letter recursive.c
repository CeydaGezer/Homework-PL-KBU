#include <stdio.h>
#include <stdio.h>

// This code aims to find the first capital letter in a given string.

char findCapital(char str[],int i) {	
   
    if (str[i]=='\0') { // If the first character of str is '\0' (null terminator)
        return;    // Exit the function because there are no more characters to process
    }

    
    if (str[i]>= 'A'&&str[i] <='Z') {
        return str[i]; 
    }
    
    return findCapital(str,i+1);
}

int main() {
    char str[100];
    char capital;
    int i;

    printf("Enter a string:");
    scanf("%s",str);

    capital=findCapital(str,0);

    if (capital){
        printf("The first capital letter in the string is: %c\n",capital);
    } 
	else {
        printf("No capital letter found in the string.\n");
    }

    return 0;
}
