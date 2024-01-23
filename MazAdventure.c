#include "fight.h"


int main(void){ // main function
    clearScreen();
    printf("\n\t**** Welcome to MazAdventure! ****");   //start message
    printf("\n\t===================================");
    printf("    \n\n"); 
    choiceMenu();                                       //call the intro function
    gameloop();                                         //call the rest of stuff
}