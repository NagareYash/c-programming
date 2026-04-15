#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char team_name[50];
    int  num_players;
    char **players;
} Team;

int main() {
    Team t;

    printf("Enter team name: ");
    scanf("%s", t.team_name);

    printf("How many players? ");
    scanf("%d", &t.num_players);

    /* Step 1: allocate the outer array of char* */
    t.players = (char **)malloc(t.num_players * sizeof(char *));
    if (t.players == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    /* Step 2: allocate each individual player name */
    for (int i = 0; i < t.num_players; i++) {
        t.players[i] = (char *)malloc(50 * sizeof(char));
        if (t.players[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        printf("Enter name for player %d: ", i + 1);
        scanf("%s", t.players[i]);
    }

    printf("\n=== Team %s ===\n", t.team_name);
    for (int i = 0; i < t.num_players; i++) {
        printf("Player %d: %s\n", i + 1, t.players[i]);
    }

    /* Cleanup - inside out */
    for (int i = 0; i < t.num_players; i++) {
        free(t.players[i]);
    }
    free(t.players);

    return 0;
}