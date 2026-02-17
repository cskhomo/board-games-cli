#ifndef BOARD_H
#define BOARD_H

class Board{

    private:
        static const int size = 3;
        int cells[size][size];

    public:
        Board();
        void draw(void);
        bool fill(int cell);
    
};

#endif