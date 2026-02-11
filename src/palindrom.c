#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function to determine if word is a palindrome
void isPalindrome(char str[])
{
    int len = strlen(str);
    char reversed[50];
    
    // Convert to lowercase and reverse at the same time
    for(int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
        reversed[i] = tolower(str[len - 1 - i]);
    }
    reversed[len] = '\0'; // null terminator
    
    // Compare using strcmp
    if(strcmp(str, reversed) == 0)
    {
        printf("\"%s\" is a palindrome!\n", str);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", str);
    }
}

//Main function to get the word as a string to be tested
int main()
{
    char word_to_test[50]; //make a large string buffer just in case
    int choice = 1;
    
    while(choice == 1)
    {
        printf("Enter the word to test: ");
        scanf("%s", word_to_test);
        isPalindrome(word_to_test);
        printf("Enter 1 to continue or 2 to halt program: ");
        scanf("%d", &choice);
    }
    
    return 0;
}
