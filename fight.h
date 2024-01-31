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
    printf("\n\n\n\n\n\t\t\t\t\t\t\t    .--.\n");
    printf("\t\t\t\t\t\t\t   |o_o |\n");
    printf("\t\t\t\t\t\t\t   |:_/ |\n");
    printf("\t\t\t\t\t\t\t  //   \\ \\\n");
    printf("\t\t\t\t\t\t\t (|     | )\n");
    printf("\t\t\t\t\t\t\t/'\\_   _/`\\\n");
    printf("\t\t\t\t\t\t\t\\___)=(___/\n");
    printf("\n\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |               FIGHT                |\n");
    printf("\t\t\t\t\t   |------------------------------------|\n");
    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |        [ Monster HP: %d ]          |\n", hpMonster);
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\n\t\t\tPress 1 to hit the monster or press 2 to inspect him:  ");
    scanf("%d", &fightChoice);
    getchar();
    switch (fightChoice)
    {
        case 1:
            clearScreen();
            hpMonster = hpMonster - 10;
            //********* Monster *********
            printf("\n\n\n\n\n\t\t\t\t\t\t\t    .--.\n");
            printf("\t\t\t\t\t\t\t   |x_x |\n");
            printf("\t\t\t\t\t\t\t   |:_/ |\n");
            printf("\t\t\t\t\t\t\t  //   \\ \\\n");
            printf("\t\t\t\t\t\t\t (|     | )\n");
            printf("\t\t\t\t\t\t\t/'\\_   _/`\\\n");
            printf("\t\t\t\t\t\t\t\\___)=(___/\n");
            printf("\n\t\t\t\t\t   ======================================\n");
            printf("\t\t\t\t\t   |               FIGHT                |\n");
            printf("\t\t\t\t\t   |------------------------------------|\n");
            printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |        [ Monster HP: %d ]           |\n", hpMonster);
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   ======================================\n");
            printf("\n\t\t\t\tYou hit critically the poor monster that just woke up. \n");
            printf("\t\t\t\tIt fainted. \n");
            printf("\n\t\t\t\tYou took the monster's furr to warm you up. \n");
            strcpy(item, item2);
            addInventory();
            currentMazeCell = 1;
            roomEvent1 = 1;
            transition();
            break;
        case 2:
            clearScreen();
            //********* Monster *********
            printf("\n\n\n\n\n\t\t\t\t\t\t\t    .--.\n");
            printf("\t\t\t\t\t\t\t   |o_o |\n");
            printf("\t\t\t\t\t\t\t   |:_/ |\n");
            printf("\t\t\t\t\t\t\t  //   \\ \\\n");
            printf("\t\t\t\t\t\t\t (|     | )\n");
            printf("\t\t\t\t\t\t\t/'\\_   _/`\\\n");
            printf("\t\t\t\t\t\t\t\\___)=(___/\n");
            printf("\n\t\t\t\t\t   ======================================\n");
            printf("\t\t\t\t\t   |               FIGHT                |\n");
            printf("\t\t\t\t\t   |------------------------------------|\n");
            printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |        [ Monster HP: %d ]          |\n", hpMonster);
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   ======================================\n");
            printf("\n\t\t\tThis little monster just woke up, it doesn't look harmful. ");
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
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
    printf("\t\t\t\t\t\t       ___|\\  /|___\n");
    printf("\t\t\t\t\t\t      /    \\__/    \\\n");
    printf("\t\t\t\t\t\t     /              \\\n");
    printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
    printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |               FIGHT                |\n");
    printf("\t\t\t\t\t   |------------------------------------|\n");
    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |        [ Monster HP:  %d ]         |\n", hpMonster);
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\n\t\t\t\tYou've been hurt by surprise, you lost 5 HP. \n");
    printf("\n\n\t\t\t\tPress Enter to continue:  ");
    getchar();
    fightRoom4();
}

void fightRoom4(){
    //***************************
    clearScreen();
    //********* Monster *********
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
    printf("\t\t\t\t\t\t       ___|-  -|___\n");
    printf("\t\t\t\t\t\t      /    \\__/    \\\n");
    printf("\t\t\t\t\t\t     /              \\\n");
    printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
    printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |               FIGHT                |\n");
    printf("\t\t\t\t\t   |------------------------------------|\n");
    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |        [ Monster HP:  %d ]         |\n", hpMonster);
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\n\t\t\tPress 1 to hit the monster or press 2 to inspect him:  ");
    scanf("%d", &fightChoice);
    getchar();
    switch (fightChoice)
    {
        case 1:
            if (hpMonster > 10){
                clearScreen();
                hpMonster = hpMonster - 10;
                //********* Monster *********
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
                printf("\t\t\t\t\t\t       ___|-  -|___\n");
                printf("\t\t\t\t\t\t      /    \\__/    \\\n");
                printf("\t\t\t\t\t\t     /              \\\n");
                printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
                printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
                printf("\t\t\t\t\t   ======================================\n");
                printf("\t\t\t\t\t   |               FIGHT                |\n");
                printf("\t\t\t\t\t   |------------------------------------|\n");
                printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
                printf("\t\t\t\t\t   |                                    |\n");
                printf("\t\t\t\t\t   |        [ Monster HP:  %d ]         |\n", hpMonster);
                printf("\t\t\t\t\t   |                                    |\n");
                printf("\t\t\t\t\t   |                                    |\n");
                printf("\t\t\t\t\t   ======================================\n");
                printf("\n\t\t\t\tYou hit the monster with your dull knife. \n");
                printf("\t\t\t\tIt lost 10 HP.  ");
                getchar();
                switch (hpMonster)
                {
                case 0:
                    clearScreen();
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
                    printf("\t\t\t\t\t\t       ___|x  x|___\n");
                    printf("\t\t\t\t\t\t      /    \\__/    \\\n");
                    printf("\t\t\t\t\t\t     /              \\\n");
                    printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
                    printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\t\t\t\t\t   |               FIGHT                |\n");
                    printf("\t\t\t\t\t   |------------------------------------|\n");
                    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |        [ Monster HP:  %d ]          |\n", hpMonster);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\n\t\t\t\tYou've beat the monster with your dull knife. \n");
                    currentMazeCell = 4;
                    roomEvent4 = 1;
                    transition();
                    break;
                default:
                    clearScreen();
                    hp = hp - 5;
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
                    printf("\t\t\t\t\t\t       ___|\\  /|___\n");
                    printf("\t\t\t\t\t\t      /    \\__/    \\\n");
                    printf("\t\t\t\t\t\t     /              \\\n");
                    printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
                    printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\t\t\t\t\t   |               FIGHT                |\n");
                    printf("\t\t\t\t\t   |------------------------------------|\n");
                    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |        [ Monster HP:  %d ]         |\n", hpMonster);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\n\t\t\t\tThe monster attacks back, you lost 5 HP.  ");
                    getchar();
                    fightRoom4();
                    break;
                }
            }
            else{
                clearScreen();
                hpMonster = hpMonster - 10;
                //********* Monster *********
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
                printf("\t\t\t\t\t\t       ___|-  -|___\n");
                printf("\t\t\t\t\t\t      /    \\__/    \\\n");
                printf("\t\t\t\t\t\t     /              \\\n");
                printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
                printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
                printf("\t\t\t\t\t   ======================================\n");
                printf("\t\t\t\t\t   |               FIGHT                |\n");
                printf("\t\t\t\t\t   |------------------------------------|\n");
                printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
                printf("\t\t\t\t\t   |                                    |\n");
                printf("\t\t\t\t\t   |        [ Monster HP:  %d ]          |\n", hpMonster);
                printf("\t\t\t\t\t   |                                    |\n");
                printf("\t\t\t\t\t   |                                    |\n");
                printf("\t\t\t\t\t   ======================================\n");
                printf("\n\t\t\t\tYou hit the monster with your dull knife. \n");
                printf("\t\t\t\tIt lost 10 HP.  ");
                getchar();
                switch (hpMonster)
                {
                case 0:
                    clearScreen();
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
                    printf("\t\t\t\t\t\t       ___|x  x|___\n");
                    printf("\t\t\t\t\t\t      /    \\__/    \\\n");
                    printf("\t\t\t\t\t\t     /              \\\n");
                    printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
                    printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\t\t\t\t\t   |               FIGHT                |\n");
                    printf("\t\t\t\t\t   |------------------------------------|\n");
                    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |        [ Monster HP:  %d ]          |\n", hpMonster);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\n\t\t\t\tYou've beat the monster with your dull knife. \n");
                    currentMazeCell = 4;
                    roomEvent4 = 1;
                    transition();
                    break;
                default:
                    clearScreen();
                    hp = hp - 5;
                    //********* Monster *********
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
                    printf("\t\t\t\t\t\t       ___|\\  /|___\n");
                    printf("\t\t\t\t\t\t      /    \\__/    \\\n");
                    printf("\t\t\t\t\t\t     /              \\\n");
                    printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
                    printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\t\t\t\t\t   |               FIGHT                |\n");
                    printf("\t\t\t\t\t   |------------------------------------|\n");
                    printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |        [ Monster HP:  %d ]         |\n", hpMonster);
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   |                                    |\n");
                    printf("\t\t\t\t\t   ======================================\n");
                    printf("\n\t\t\t\tThe monster attacks back, you lost 5 HP.  ");
                    getchar();
                    fightRoom4();
                    break;
                }
            }
            
            break;
        case 2:
            clearScreen();
            //********* Monster *********
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\t          .-/\\-.   \n");
            printf("\t\t\t\t\t\t       ___|-  -|___\n");
            printf("\t\t\t\t\t\t      /    \\__/    \\\n");
            printf("\t\t\t\t\t\t     /              \\\n");
            printf("\t\t\t\t\t\t    // /_        _\\  \\\n");
            printf("\t\t\t\t\t\t   /'\\___        ___/`\\\n");
            printf("\t\t\t\t\t   ======================================\n");
            printf("\t\t\t\t\t   |               FIGHT                |\n");
            printf("\t\t\t\t\t   |------------------------------------|\n");
            printf("\t\t\t\t\t   |          [ Your HP: %d ]           |\n", hp);
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |        [ Monster HP:  %d ]         |\n", hpMonster);
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   ======================================\n");
            printf("\n\t\t\tThis monster seems sleepy, it could be dangerous though. ");
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
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
    printf("\t\t\t\t\t\t          _|o  o|_\n");
    printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
    printf("\t\t\t\t\t\t        /          \\\n");
    printf("\t\t\t\t\t\t       /  /______\\  \\ \n");
    printf("\t\t\t\t\t\t      |'\\__________/'|  \n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                            Enter ->|\n");
    printf("\t\t\t\t\t   ====================================== ");
    printf("\n\n\n\t\t\t\t\t  The monster heard you, and turned around. ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
    printf("\t\t\t\t\t\t          _|o  o|_\n");
    printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
    printf("\t\t\t\t\t\t        /          \\\n");
    printf("\t\t\t\t\t\t       /  /______\\  \\ \n");
    printf("\t\t\t\t\t\t      |'\\__________/'|  \n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |        Good evening, human.        |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |   You are threatened, aren't you?  |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                            Enter ->|\n");
    printf("\t\t\t\t\t   ====================================== ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
    printf("\t\t\t\t\t\t          _|o  o|_\n");
    printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
    printf("\t\t\t\t\t\t        /          \\\n");
    printf("\t\t\t\t\t\t       /  /______\\  \\ \n");
    printf("\t\t\t\t\t\t      |'\\__________/'|  \n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |      Do not. I aint hurt you.      |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |                            Enter ->|\n");
    printf("\t\t\t\t\t   ====================================== ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
    printf("\t\t\t\t\t\t          _|o  o|_\n");
    printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
    printf("\t\t\t\t\t\t        /          \\\n");
    printf("\t\t\t\t\t\t       /  /______\\  \\ \n");
    printf("\t\t\t\t\t\t      |'\\__________/'|  \n");
    printf("\t\t\t\t\t   ======================================\n");
    printf("\t\t\t\t\t   |                                    |\n");
    printf("\t\t\t\t\t   |    You might have already met my   |\n");
    printf("\t\t\t\t\t   |   husband, he is a sleepy version  |\n");
    printf("\t\t\t\t\t   |             of myself.             |\n");
    printf("\t\t\t\t\t   |                            Enter ->|\n");
    printf("\t\t\t\t\t   ====================================== ");
    getchar();
    if (hp > 19){
        clearScreen();
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
        printf("\t\t\t\t\t\t          _|o  o|_\n");
        printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
        printf("\t\t\t\t\t\t        /          \\\n");
        printf("\t\t\t\t\t\t       /  /______\\  \\ \n");
        printf("\t\t\t\t\t\t      |'\\__________/'|  \n");
        printf("\t\t\t\t\t   ======================================\n");
        printf("\t\t\t\t\t   |                                    |\n");
        printf("\t\t\t\t\t   |      I'll let you go where you     |\n");
        printf("\t\t\t\t\t   |         want to. Go ahead.         |\n");
        printf("\t\t\t\t\t   |                                    |\n");
        printf("\t\t\t\t\t   |                            Enter ->|\n");
        printf("\t\t\t\t\t   ====================================== \n");
        currentMazeCell = 5;
        roomEvent5 = 1;
        transition();
        gameloop();
    }
    else{
        clearScreen();
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
        printf("\t\t\t\t\t\t          _|o  o|_\n");
        printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
        printf("\t\t\t\t\t\t        /     __   \\\n");
        printf("\t\t\t\t\t\t       /  /_  \\ \\_\\ \\ \n");
        printf("\t\t\t\t\t\t      |'\\__/   \\___/'|  \n");
        printf("\t\t\t\t\t   ======================================\n");
        printf("\t\t\t\t\t   |                                    |\n");
        printf("\t\t\t\t\t   |     It seems like a bit weaker     |\n");
        printf("\t\t\t\t\t   |             than usual.            |\n");
        printf("\t\t\t\t\t   |       Would you like to rest?      |\n");
        printf("\t\t\t\t\t   |                                    |\n");
        printf("\t\t\t\t\t   ====================================== ");
        printf("\n\n\t\t\t\t\t\t\t   (1) to rest ");
        printf("\n\n\t\t\t\t\t\t\t   (Any key) to leave  ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            hp = 20;
            clearScreen();
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t   ______ \n");
            printf("\t\t\t\t\t\t          _|o  o|_\n");
            printf("\t\t\t\t\t\t         /  \\/\\/  \\\n");
            printf("\t\t\t\t\t\t        /          \\\n");
            printf("\t\t\t\t\t\t       /  /______\\  \\ \n");
            printf("\t\t\t\t\t\t      |'\\__________/'|  \n");
            printf("\t\t\t\t\t   ======================================\n");
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |      You're now healed of your     |\n");
            printf("\t\t\t\t\t   |     wounds. Go leave this place.   |\n");
            printf("\t\t\t\t\t   |                                    |\n");
            printf("\t\t\t\t\t   |                            Enter ->|\n");
            printf("\t\t\t\t\t   ====================================== \n");
            currentMazeCell = 5;
            roomEvent5 = 1;
            transition();
            break;
        
        default:
            clearScreen();
            currentMazeCell = 5;
            roomEvent5 = 1;
            transition();
            break;
        }
    }
}