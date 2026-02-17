#include "board.h"
#include <iostream>

using namespace std;

Board::Board(){

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cells[i][j] = 0;
        }
    }
}

void Board::draw(){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (!cells[i][j] ){
                cout << (i * size) + (j + 1) << " ";
            }

            if (cells[i][j] == -1){
                cout << 'X' << ' ';
            }

            if (cells[i][j] == 1){
                cout << 'O' << ' ';
            }
        }
        cout << endl;
    }
}

bool Board::fill(int player, int cell){

    int plays[] = {-1, 1};

    if (cell <= size){
        if (cells[0][cell-1] == 0){
            cells[0][cell-1] = plays[player-1];
            return true;
        }
    }

    if (cell <= size*(size-1)){
        if (cells[1][(cell-4)] == 0){
            cells[1][(cell-4)] = plays[player-1];
            return true;
        }
    }

    if (cell <= size*size){
        if (cells[2][cell-7] == 0){
            cells[2][cell-7] = plays[player-1];
            return true;
        }
    }

    return false;
}