#include <stdio.h>
#include <string.h>

struct Flight {
   int flightNo;
    char from[20];
    char to[20];
    char date[20];
    int seats;
};

void bookSeat(struct Flight *f) {
    if (f->seats > 0) {
        f->seats--;
        printf("Seat booked successfully!\n");
        printf("seats left : %d",f->seats);
    } else {
        printf("No seats available!\n");
    }
}

void showFlight(struct Flight f) {
    printf("\n----- Flight Details -----\n");
    printf("Flight Number : %d\n", f.flightNo);
    printf("From          : %s\n", f.from);
    printf("To            : %s\n", f.to);
    printf("Date          : %s\n", f.date);
    printf("Available Seats: %d\n", f.seats);
    printf("--------------------------\n");
}

int main() {
    struct Flight f;

    printf("Enter Flight Number: ");
    scanf("%d", &f.flightNo);
    getchar();

    printf("Enter Departure City: ");
    fgets(f.from, sizeof(f.from), stdin);
    f.from[strcspn(f.from, "\n")] = '\0';

    printf("Enter Destination City: ");
   fgets(f.to, sizeof(f.to), stdin);
    f.to[strcspn(f.to, "\n")] = '\0';

    printf("Enter Flight Date (dd-mm-yyyy): ");
    fgets(f.date, sizeof(f.date), stdin);
    f.date[strcspn(f.date, "\n")] = '\0';

    printf("Enter Available Seats: ");
    scanf("%d", &f.seats);
    
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Show Flight Details\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                showFlight(f);
                break;
            case 2:
                bookSeat(&f);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 3);

    return 0;
}


