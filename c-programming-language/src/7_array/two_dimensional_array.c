#include<stdio.h>

void renderBoard();

char gameBoard[3][3] = { 
                            { '-', '-', '-' },
                            { '-', '-', '-' },
                            { '-', '-', '-' }
                        };

void main() {
    gameBoard[0][0] = '1';
    renderBoard();
    gameBoard[1][0] = '0';
    renderBoard();
    gameBoard[1][1] = '1';
    renderBoard();
    gameBoard[2][0] = '0';
    renderBoard();
    gameBoard[2][2] = '1';
    renderBoard();


    return;
}

void renderBoard() {
    int indexRow, indexColumn;
    for(indexRow = 0; indexRow < 3; indexRow++) {
        for(indexColumn = 0; indexColumn < 3; indexColumn++) {
            printf("%c ", gameBoard[indexRow][indexColumn]);
        }
        printf("\n");
    }
    printf("\n");
}
