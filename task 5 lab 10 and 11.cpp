#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 50
#define MAX_NAME_LEN 50
#define MAX_POSITION_LEN 20

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
    char position[MAX_POSITION_LEN];
} Player;

typedef struct {
    char name[MAX_NAME_LEN];
    char sport[MAX_NAME_LEN];
    Player players[MAX_PLAYERS];
    int playerCount;
} Team;

void addPlayer(Team *team, const char *name, int age, const char *position) {
    if (team.playerCount >= MAX_PLAYERS) {
        printf("Cannot add more players. Team is full.\n");
        return;
    }
    Player *p = &team->players[team->playerCount];
    strncpy(p->name, name, MAX_NAME_LEN);
    p->age = age;
    strncpy(p->position, position, MAX_POSITION_LEN);
    team->playerCount++;
}

// Function to display team details
void displayTeam(const Team *team) {
    printf("\nTeam Name: %s\n", team->name);
    printf("Sport: %s\n", team->sport);
    printf("Players (%d):\n", team->playerCount);
    for (int i = 0; i < team->playerCount; i++) {
        printf("  %d. %s, Age: %d, Position: %s\n", 
               i+1, team->players[i].name, team->players[i].age, team->players[i].position);
    }
}

// Function to search players by position
void searchByPosition(const Team *team, const char *position) {
    printf("\nPlayers in position '%s':\n", position);
    int found = 0;
    for (int i = 0; i < team->playerCount; i++) {
        if (strcmp(team->players[i].position, position) == 0) {
            printf("  %s, Age: %d\n", team->players[i].name, team->players[i].age);
            found = 1;
        }
    }
    if (!found) {
        printf("  No players found in this position.\n");
    }
}

int main() {
    Team team;
    team.playerCount = 0;

    printf("Enter team name: ");
    fgets(team.name, MAX_NAME_LEN, stdin);
    team.name[strcspn(team.name, "\n")] = 0;  // remove newline

    printf("Enter sport: ");
    fgets(team.sport, MAX_NAME_LEN, stdin);
    team.sport[strcspn(team.sport, "\n")] = 0;  // remove newline

    int choice;
    do {
        printf("\n1. Add Player\n2. Display Team\n3. Search by Position\n0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        if (choice == 1) {
            char name[MAX_NAME_LEN], position[MAX_POSITION_LEN];
            int age;
            printf("Enter player name: ");
            fgets(name, MAX_NAME_LEN, stdin);
            name[strcspn(name, "\n")] = 0;

            printf("Enter age: ");
            scanf("%d", &age);
            getchar();

            printf("Enter position: ");
            fgets(position, MAX_POSITION_LEN, stdin);
            position[strcspn(position, "\n")] = 0;

            addPlayer(&team, name, age, position);
        } 
        else if (choice == 2) {
            displayTeam(&team);
        } 
        else if (choice == 3) {
            char position[MAX_POSITION_LEN];
            printf("Enter position to search: ");
            fgets(position, MAX_POSITION_LEN, stdin);
            position[strcspn(position, "\n")] = 0;

            searchByPosition(&team, position);
        }

    } while (choice != 0);

    return 0;
}

