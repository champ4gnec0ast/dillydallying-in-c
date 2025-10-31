#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // declaring variables
    int gameCount;
    char playerChoice;
    int computerChoice;
    char winner(int, int);
    char output;
    
    printf("rock paper scissors yayayay input game number: ");
    scanf("%d", &gameCount);

    // initialising rand
    srand(time(NULL));

    // main game loop
    while (gameCount > 0) {
        printf("input: rock = 1, paper = 2, scissors = 3 \n");
        scanf("%c", &playerChoice);
        computerChoice = rand() % 3 + 1;
        printf("%d", computerChoice);
        output = winner(playerChoice, computerChoice);
        printf("%c", output);
        gameCount--;
    }

};

char winner(int player, int computer) {
    // computer winning
    if (player == 1 && computer == 2 || player == 2 && computer == 3 || player == 3 && computer == 1) {
        printf("computer wins");
        return 'P';
    } 
    // player winning
    else if (player == 1 && computer == 3 || player == 2 && computer == 1 || player == 3 && computer == 2) {
        printf("player wins");
        return 'C';
    } else {
        printf("tie bruh");
        return 'T';
    }
}