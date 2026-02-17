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
        }
        cout << endl;
    }
}

bool Board::fill(int cell){

    if (cell <= size){
        if (cells[0][cell-1] == 0){
            cells[0][cell-1] = -1;
            return true;
        }
    }

    if (cell <= size*(size-1)){
        if (cells[1][(cell-4)] == 0){
            cells[1][(cell-4)] = -1;
            return true;
        }
    }

    if (cell <= size*size){
        if (cells[2][cell-7] == 0){
            cells[2][cell-7] = -1;
            return true;
        }
    }

    return false;
}