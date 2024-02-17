#include "src/fight.h"
#include <windows.h>

void fullscreen() // put the fullscreen
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

int main(void){ // main function
    fullscreen();
    clearScreen();
    printf("\033[0;33m");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t     ===================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t     **** Welcome to MazAdventure! ****");   //start message
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t     ===================================");
    printf("\033[0m");
    printf("\n\n\n\n"); 
    choiceMenu();                                       //call the intro function
    gameloop();                                         //call the rest of stuff
}