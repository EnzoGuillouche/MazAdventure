#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "maze-game.h"


/*********************************
********** ROOM 1 FIGHT **********
*********************************/

void fightRoom1(){
    clearScreen();
    //********* Monster *********
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .--.\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t       |o_o |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t       |:_/ |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t      //   \\ \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     (|     | )\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /'\\_   _/`\\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    \\___)=(___/\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t    ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    |                  FIGHT                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    |------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    |             [ Your HP: %d ]              |\n", hp);
    printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    |           [ Monster HP: %d ]             |\n", hpMonster);
    printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t    ============================================\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tPress 1 to hit the monster or press 2 to inspect him:  ");
    scanf("%d", &fightChoice);
    getchar();
    switch (fightChoice)
    {
        case 1:
            clearScreen();
            hpMonster = hpMonster - 10;
            //********* Monster *********
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .--.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t       |x_x |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t       |:_/ |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t      //   \\ \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     (|     | )\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /'\\_   _/`\\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    \\___)=(___/\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t    ============================================\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                  FIGHT                   |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |             [ Your HP: %d ]              |\n", hp);
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |           [ Monster HP:  %d ]             |\n", hpMonster);
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ============================================\n");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tYou hit critically the poor monster that just woke up. \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\tIt fainted. \n");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tYou took the monster's furr to warm you up. \n");
            strcpy(item, item2);
            addInventory();
            currentMazeCell = 1;
            roomEvent1 = 1;
            transition();
            break;
        case 2:
            clearScreen();
            //********* Monster *********
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .--.\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t       |o_o |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t       |:_/ |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t      //   \\ \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     (|     | )\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /'\\_   _/`\\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    \\___)=(___/\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t    ============================================\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                  FIGHT                   |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |             [ Your HP: %d ]              |\n", hp);
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |           [ Monster HP: %d ]             |\n", hpMonster);
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t    ============================================\n");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\tThis little monster just woke up, it doesn't look harmful. ");
            getchar();
            fightRoom1();
            break;
        default:
            fightRoom1();
            break;
    }

}



/*********************************
********** ROOM 4 FIGHT **********
*********************************/


void fightRoom4Surprise(){
    clearScreen();
    hp = hp - 5;
    hpMonster = 20;
    //********* Monster *********
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|\\   /|___\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:  %d ]            |\n", hpMonster);
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      You've been hurt by surprise, you lost 5 HP. \n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t      Press Enter to continue:  ");
    getchar();
    fightRoom4();
}

void fightRoom4(){
    //***************************
    clearScreen();
    //********* Monster *********
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|-   -|___\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:  %d ]            |\n", hpMonster);
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      Press 1 to hit the monster or press 2 to inspect him:  ");
    scanf("%d", &fightChoice);
    getchar();
    switch (fightChoice)
    {
        case 1:
            if (hpMonster > 10){
                clearScreen();
                hpMonster = hpMonster - 10;
                //********* Monster *********
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|-   -|___\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:  %d ]            |\n", hpMonster);
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t      You hit the monster with your dull knife. \n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      It lost 10 HP.  ");
                getchar();
                switch (hpMonster)
                {
                case 0:
                    clearScreen();
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|x   x|___\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:   %d ]            |\n", hpMonster);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      You've beat the monster with your dull knife. \n");
                    currentMazeCell = 4;
                    roomEvent4 = 1;
                    transition();
                    break;
                default:
                    clearScreen();
                    hp = hp - 5;
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|\\   /|___\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:  %d ]            |\n", hpMonster);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      The monster attacks back, you lost 5 HP.  ");
                    getchar();
                    fightRoom4();
                    break;
                }
            }
            else{
                clearScreen();
                hpMonster = hpMonster - 10;
                //********* Monster *********
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|-   -|___\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:   %d ]            |\n", hpMonster);
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t      You hit the monster with your dull knife. \n");
                printf("\t\t\t\t\t\t\t\t\t\t\t      It lost 10 HP.  ");
                getchar();
                switch (hpMonster)
                {
                case 0:
                    clearScreen();
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|x   x|___\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:   %d ]            |\n", hpMonster);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      You've beat the monster with your dull knife. \n");
                    currentMazeCell = 4;
                    roomEvent4 = 1;
                    transition();
                    break;
                default:
                    clearScreen();
                    hp = hp - 5;
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|\\   /|___\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:  %d ]            |\n", hpMonster);
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t      The monster attacks back, you lost 5 HP.  ");
                    getchar();
                    fightRoom4();
                    break;
                }
            }
            
            break;
        case 2:
            clearScreen();
            //********* Monster *********
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        .-/*\\-.   \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|-   -|___\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\___/    \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /   /         \\   \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /   /_         _\\   \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t/'\\____         ____/'\\\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                  FIGHT                   |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |------------------------------------------|\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |             [ Your HP: %d ]              |\n", hp);
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |           [ Monster HP:  %d ]            |\n", hpMonster);
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t      This monster seems sleepy, it could be dangerous though. ");
            getchar();
            fightRoom4();
            break;
        default:
            fightRoom4();
            break;
    }
}




/**********************************
************* ROOM 5 **************
**********************************/

void healRoom(){
    clearScreen();
    //********* Monster *********
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                 Enter -> |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t      The monster heard you, and turned around. ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |            Good evening, human.          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |      You are threatened, aren't you?     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                 Enter -> |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================  ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |         Do not. I aint hurt you.         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                 Enter -> |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================ ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |       You might have already met my      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |      husband, he is a sleepy version     |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                 of myself.               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                 Enter -> |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================ ");
    getchar();
    if (hp > 19){
        clearScreen();
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |         I'll let you go wherever         |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |           you want. Go ahead.            |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================ \n");
        currentMazeCell = 5;
        roomEvent5 = 1;
        transition();
        gameloop();
    }
    else{
        clearScreen();
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |           You seem a bit weaker          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                than usual.               |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |          Would you like to rest?         |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      |                                 Enter -> |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t       (1) to rest ");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t       (2) to leave  ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            hp = 20;
            clearScreen();
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |         You're now healed of your        |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |        wounds. Go leave this place.      |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
            currentMazeCell = 5;
            roomEvent5 = 1;
            transition();
            break;
        
        default:
            clearScreen();
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t        _______   \n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t     ___|o   o|___\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t    /    \\/^\\/    \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   /               \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t  /  /           \\  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t /  /_____________\\  \\\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t|'\\_________________/'|\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |      Well. I'll let you go wherever      |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |           you want. Go ahead.            |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================ \n");
            currentMazeCell = 5;
            roomEvent5 = 1;
            transition();
            break;
        }
    }
}

void Room9(){
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t (^\\_____/^) (^\\_____/^)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t (o\\ o o /o) (o\\ o o /o)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t ( \\  o  / ) ( \\  o  / )\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   (>  <)       (>  <)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t ((__)__)       (__(__))\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t            These monsters look like twins. ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t (^\\_____/^) (^\\_____/^)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t (o\\ o o /o) (o\\ o o /o)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t ( \\  o  / ) ( \\  o  / )\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t   (>  <)       (>  <)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t ((__)__)       (__(__))\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |             - hElLo ThErE!               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |             - HeLlO tHeRe!               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      |                                 Enter -> |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      ============================================\n");
    getchar();
    nowInDevelopment();
}