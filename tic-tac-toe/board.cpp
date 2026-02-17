#include "board.h"
#include <iostream>

using namespace std;

Board::Board(){
    for (int i = 0; i < size; i++){
        for (int i = 0; i < size; i++){
            cells[i][i] = 0; 
        }
    }

}

void Board::draw(){

    for (int i = 0; i < size; i++){
        for (int i = 0; i < size; i++){
            cout << cells[i][i] << " ";
        }
        cout << endl;
    }
}