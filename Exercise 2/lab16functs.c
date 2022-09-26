#include "lab16functs.h"

char penteWinner(char array[19][19], int row, int col){
    // Checks for vertical 5 in a row
    for (int i = 0; i < 5; i++){
        if (array[row + i][col] != array[row][col]){
            break;
        } else if (i == 4){
            return array[row][col];
        }
    }

    // Checks for horizontal 5 in a row
    for (int i = 0; i < 5; i++){
        if (array[row][col + i] != array[row][col]){
            break;
        } else if (i == 4){
            return array[row][col];
        }
    }

    return ' ';
}