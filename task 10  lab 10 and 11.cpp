#include <stdio.h>
#include <string.h>

int ispalindrome(char word[]) {
    int start = 0;
    int end = strlen(word) - 1;

    while (start < end) {

        if (word[start] != word[end]) {
            return 0;
        }

        start++;
        end--;
    }
    return 1;  
}

int main() {
    char word[5][20];
    int i;

    printf("Enter 5 words (20 max characters):\n");

    for (i = 0; i < 5; i++) {
        fgets(word[i], sizeof(word[i]), stdin);
    word[i][strcspn(word[i], "\n")] = '\0';
    }

    printf("\n---------- Checking Palindrome ----------\n");

    for (i = 0; i < 5; i++) {
        if (ispalindrome(word[i])) {
            printf("%s is Palindrome\n", word[i]);
        } else {
            printf("%s is Not Palindrome\n", word[i]);
        }
    }

    return 0;
}


