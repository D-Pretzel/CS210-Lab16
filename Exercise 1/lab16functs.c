#include "lab16functs.h"

// Will display the values of a 4x4 2-D integer array
void print4SquareInt(int array[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
}

bool hasUniqueElements4Square(int array[4][4]){
    // Checks to make sure all values are unique
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                for (int l = 0; l < 4; l++){
                    if (array[i][j] == array[k][l] && i != k && j != l){
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

// Checks to see if the 4x4 is a magic square
bool isMagic4Square(int array[4][4]){
    int sum = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;
    int sum7 = 0;
    int sum8 = 0;
    for (int i = 0; i < 4; i++){
        sum += array[0][i];
        sum2 += array[1][i];
        sum3 += array[2][i];
        sum4 += array[3][i];
        sum5 += array[i][0];
        sum6 += array[i][1];
        sum7 += array[i][2];
        sum8 += array[i][3];
    }
    if (sum == sum2 && sum2 == sum3 && sum3 == sum4 && sum4 == sum5 && sum5 == sum6 && sum6 == sum7 && sum7 == sum8){
        return true;
    }
    return false;
}

