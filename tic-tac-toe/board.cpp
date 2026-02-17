#include "board.h"
#include <iostream>

using namespace std;

Board::Board(){

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cells[i][j] = (i * size) + (j + 1);
        }
    }
}

void Board::draw(){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << cells[i][j] << " ";
        }
        cout << endl;
    }
}