#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int hp = 20;
int choice;
int positionX = 0;
int positionY = 0;

void clearScreen() {
    //printf("\033[2J\033[1;1H");
    system("cls");
}

void choiceMenu(){
    printf("\n\tPress 1 to play:  ");
    scanf("%d", &choice);
    getchar();
    switch (choice)
    {
        case 1:
            clearScreen();
            printf("\n\n\t\tYou fell into the oblivion, into a dark and moisty room.");
            printf("\n\t\tThis place looks like it's another dimension, the darkside of the real world.");
            printf("\n\n\t\tYou realise that you need to get out of this place, or.. something would happen.");
            printf("\n\n\n\t\tYou have to move throughout a maze to find the exit. ");
            printf("\n\t\tYou can move one room by room, encounter monsters and find traps. ");
            printf("\n\n\t\tYou'll execute actions with numbers. \n\t\tThe choices will be displayed to know when to use certain keys. ");
            printf("\n\n\n\t\t\tPress any key to continue:  ");
            scanf("%d", &choice);
            getchar();
            return;
            break;
        default:
            clearScreen();
            choiceMenu();
            break;
    }
}


void actionText(){
    switch (currentMazeCell)
    {
    case 0:
        printf("\n\n\t You can go to the right (1) or go upstrairs (2).");
        break;
    case 1:
        printf("\n\n\t You can go to the left (3) or go upstrairs (2).");
    default:
        break;
    }
    
}

void directionF(){
    printf("\n\t Choose your action:  ");
    scanf("%d", direction);
    getchar();
    switch (direction)
    {
        case 1:
            currentMazeCell = currentMazeCell + 1;
            currentMaze();
            break;
        case 2:
            currentMazeCell = currentMazeCell + 4;
            currentMaze();
            break;
        default:
            clearScreen();
            currentMaze();
            gameloop();
            break;
        }
    return;
}

void gameloop(){
    printf("\n\t You HP bar: %d", hp);
    actionText();
    directionF();
    clearScreen();
    printf("bug");
}