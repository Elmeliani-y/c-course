#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];
const char player = 'x';

void resetboard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';  // Single quotes for character
        }
    }
}
//function that shows the board
void showboard() {
    printf(" %c  |  %c  |  %c \n", board[0][0], board[0][1], board[0][2]);
    printf("-------------\n");
    printf(" %c  |  %c  |  %c \n", board[1][0], board[1][1], board[1][2]);
    printf("-------------\n");
    printf(" %c  |  %c  |  %c \n", board[2][0], board[2][1], board[2][2]);
}



//function of player's move

void playermove() {
    int x, y;
    printf("Choose row (1-3): ");
    scanf("%d", &x);
    printf("Choose column (1-3): ");
    scanf("%d", &y);

    if (x < 1 || x > 3 || y < 1 || y > 3) {
        printf("Invalid move! Try again.\n");
        playermove();
    } else if (board[x - 1][y - 1] == ' ') {
        board[x - 1][y - 1] = player;
    } else {
        printf("Cell already occupied! Try again.\n");
        playermove();
    }
}

//function of computer's move

void computermove() {
    srand(time(0));
    int x, y;
    do {
        x = rand() % 3;
        y = rand() % 3;
    } while (board[x][y] != ' ');

    board[x][y] = 'o';
}


//function to check if there are free spaces


int freespace() {
    int freespace = 9;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != ' ') {
                freespace--;
            }
        }
    }
    return freespace;
}


//function to choose winner
void checkwinner(char* winner) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            *winner = board[i][0];
            return;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            *winner = board[0][i];
            return;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        *winner = board[0][0];
    } else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        *winner = board[0][2];
    }
}


//function to show the winner
void showwinner(char winner) {
    if (winner == 'x') {
        printf("You won!\n");
    } else if (winner == 'o') {
        printf("You lost!\n");
    } else {
        printf("It's a draw!\n");
    }
}


//main function
int main() {
    char winner = ' ';
    resetboard();
    printf("welcome to tic tac toe game made in c language !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!") ; 
    printf("\n");
    printf("Player: x, Computer: o\n");
    printf("\n");
    printf("Let's start playing...\n");
    while (freespace() > 0 && winner == ' ') {
        printf("Player's turn...\n");
        playermove();
        showboard();
        checkwinner(&winner);
        if (winner != ' ') {
            break;
        }
        printf("Computer's turn...\n");
        computermove();
        showboard();
        checkwinner(&winner);
    }
    if (winner !=' ') {
        printf("Do you want to play again? (y/n): ");
        char choice;
        scanf("%c") ; 
        scanf(" %c", &choice);
        if (choice == 'y') {
            main();
        } else {
            printf("Goodbye!\n");
        }
    }
    showwinner(winner);
    
    
    return 0;
}
