#include <stdio.h>
#include <string.h>
#include "main.h"

#define DRAW "Draw"
#define ERROR "Failed"
#define PLAYER1 "Player1"
#define PLAYER2 "Player2"
#define INVALID "Invalid"
 

 

char* rps_result(char* player1, char* player2) {
    // Check for invalid inputs
    if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) {
        return INVALID;
    }
    if (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0) {
        return INVALID;
    }
   // Checking if the match is draw
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Rock") == 0 ||
        strcmp(player1, "Scissors") == 0 && strcmp(player2, "Scissors") == 0 ||
        strcmp(player1, "Paper") == 0 && strcmp(player2, "Paper") == 0) {
        return DRAW;
    }
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Paper") == 0 ||
        strcmp(player1, "Scissors") == 0 && strcmp(player2, "Rock") == 0 ||
        strcmp(player1, "Paper") == 0 && strcmp(player2, "Scissors") == 0) {
        return PLAYER2;  //player2 wins 
    }
    else {
        //player1 wins
        return PLAYER1;
    }
   

}


int main(void) { 
  
}
