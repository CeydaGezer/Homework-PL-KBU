#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to calculate the length of the string using a pointer */

int main(int argc, char *argv[]) {
	char str[250],i,c=0;
	
	printf("Please enter your string:");
	gets(str);
	
	for(i=0;i!='\0';i++){
		c++;
	}
	return 0;
}
