#include "maze-game.h"


int main(void){
    clearScreen();
    printf("\n\t **** Welcome to the MazGame! ****");
    printf("\n\t===================================");
    printf("    \n\n"); 
    choiceMenu();
    mazeBegin();
    gameloop();
}