#include <stdio.h>
#include <time.h>

int main() {
    FILE *file;
    time_t currentTime;
    char *timeStr;

   
    file = fopen("log.txt", "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

   
    time(&currentTime);
    timeStr = ctime(&currentTime);  

   
    fprintf(file, "%s", timeStr); 

   
    fclose(file);

    printf("Timestamp appended to log.txt successfully.\n");
    return 0;
}

