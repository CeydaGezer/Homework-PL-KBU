#include <stdio.h>
#include <strlib.h>

/*Check if a word is palindrome or not with recursive*/

void checkPalindrome(char str[], int index){
	
    int len=strlen(str)-(index+1);
    
    
    if (str[index]==str[len]){
    	
        if (index+1==len||index == len){
        	
            printf(" This word is a Palindrome.");
            return;
        }
        checkPalindrome(str,index+1);
    }
    else
    {
        printf(" This word is not a Palindrome.");
    }
}
 
int main()
{
    char str[25];
    
    printf("Please write your word:");
    scanf("%s",&str);
    
    checkPalindrome(str,0);
 
    return 0;
}
 

