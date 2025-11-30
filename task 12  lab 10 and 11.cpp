#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

   
    printf("Enter the name of the file (with extension): ");
    scanf("%s", filename);

   
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

   
    while ((ch = fgetc(file)) != EOF) {
        characters++;

       
        if (ch == '\n') {
            lines++;
        }

       
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    
    if (inWord) {
        words++;
    }


    fclose(file);

    
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}

