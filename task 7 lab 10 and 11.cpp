#include <stdio.h>
#include <string.h>

int countvowel(char str[], int i) {
    if (str[i] == '\0') {
        return 0; // base case
    }

    
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
        return 1 + countvowel(str, i+1);
    } else {
        return countvowel(str, i+1);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int vowel = countvowel(str, 0);
    printf("Number of vowels = %d\n", vowel);

    return 0;
}

