#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 10

struct Player {
    char name[50];
    char country[50];
    float battingAverage;
};

void swap(struct Player *a, struct Player *b) {
    struct Player temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(struct Player players[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (players[j].battingAverage > players[minIndex].battingAverage) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&players[i], &players[minIndex]);
        }
    }
}

int main() {
    struct Player players[MAX_PLAYERS];

    int n;

    printf("Enter the number of players (at least 10): ");
    scanf("%d", &n);

    if (n < 10) {
        printf("Please enter at least 10 players.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Country: ");
        scanf("%s", players[i].country);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }

    selectionSort(players, n);

    printf("\nPlayer with the highest batting average:\n");
    printf("Name: %s\n", players[0].name);
    printf("Country: %s\n", players[0].country);
    printf("Batting Average: %.2f\n", players[0].battingAverage);

    return 0;
}
