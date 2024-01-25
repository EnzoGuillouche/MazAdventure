#include "fight.h"


int main(void){ // main function
    clearScreen();
    printf("\n\t\t\t\t**** Welcome to MazAdventure! ****");   //start message
    printf("\n\t\t\t\t===================================");
    printf("\n\n"); 
    choiceMenu();                                       //call the intro function
    gameloop();                                         //call the rest of stuff
}