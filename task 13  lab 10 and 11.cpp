#include <stdio.h>

int main() {
    FILE *file;

  
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
   
    fclose(file);

    
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

   
    int ch = fgetc(file);
    if (ch == EOF) {
        printf("The file 'data.txt' is now empty.\n");
    } else {
        printf("The file 'data.txt' still has some content.\n");
    }

    fclose(file);
    return 0;
}

