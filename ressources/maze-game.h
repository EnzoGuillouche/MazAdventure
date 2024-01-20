#include "maze-map.h"

int hp = 20;
int hpMonster = 10;
int choice;
int fightChoice;
int direction;
int positionX = 0;
int positionY = 0;
char item[] = "Dull Knife\n";
char item2[] = "Warm Furr\n";

void clearScreen() {
    //printf("\033[2J\033[1;1H");
    system("cls");
}

void choiceMenu(){
    printf("\n\tPress Enter to play:  ");
    getchar();
    clearScreen();
    printf("\n\n\t\tYou fell into the oblivion, into a dark and moisty room.");
    printf("\n\t\tThis place looks like it's another dimension, the darkside of the real world.");
    printf("\n\n\t\tYou realise that you need to get out of this place, or.. something would happen.");
    printf("\n\n\n\t\tYou have to move throughout a maze to find the exit. ");
    printf("\n\t\tYou can move one room by room, encounter monsters and find traps. ");
    printf("\n\n\n\t\tYou'll execute actions with numbers and the Enter key. \n\t\tThe choices will be displayed to know when to use certain keys. ");
    printf("\n\n\n\n\n\n\n\n\t\tPress Enter to continue:  ");
    getchar();
    return;
}


void actionText(){
    switch (currentMazeCell)
    {
    case 0:
        printf("\n\n\t You are located in room 0.");
        printf("\n\t You can go to the right (1) or go upstairs (2).\n");
        break;
    case 1:
        printf("\n\n\t You are located in room 1.");
        printf("\n\t You can go upstairs (2).\n");
        break;
    case 4:
        printf("\n\n\t You are located in room 4.");
        printf("\n\t You can go to the right (1).\n");
        break;
    case 5:
        printf("\n\n\t You are located in room 5.");
        printf("\n\t You can go upstairs (2).\n");
        break;
    default:
        break;
    }
    
}

void directionF(){
    switch (currentMazeCell)
    {
    case 0:
        scanf("%d", &direction);
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
            case 5:
                roomEvent = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\t You cannot go this way.");
                getchar();
                directionF();
                break;
        }
    case 1:
        scanf("%d", &direction);
        getchar();
        switch (direction)
        {
            case 2:
                currentMazeCell = currentMazeCell + 4;
                currentMaze();
                break;
            case 5:
                roomEvent = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\t You cannot go this way.");
                getchar();
                gameloop();
                break;
            return;
        }
    case 4:
        scanf("%d", &direction);
        getchar();
        switch (direction)
        {
            case 1:
                currentMazeCell = currentMazeCell + 1;
                currentMaze();
                break;
            case 5:
                roomEvent = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\t You cannot go this way.");
                getchar();
                gameloop();
                break;
            return;
        }
    case 5:
        scanf("%d", &direction);
        getchar();
        switch (direction)
        {
            case 2:
                currentMazeCell = currentMazeCell + 4;
                currentMaze();
                break;
            case 5:
                roomEvent = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\t You cannot go this way.");
                getchar();
                gameloop();
                break;
            return;
        }
    
    }
    // switch (direction)
    // {
    //     case 1:
    //         currentMazeCell = currentMazeCell + 1;
    //         currentMaze();
    //         break;
    //     case 2:
    //         currentMazeCell = currentMazeCell + 4;
    //         currentMaze();
    //         break;
    //     case 3:
    //         currentMazeCell = currentMazeCell - 1;
    //         currentMaze();
    //         break;
    //     case 4:
    //         currentMazeCell = currentMazeCell - 4;
    //         currentMaze();
    //         break;
    //     case 5:
    //         roomEvent1 = 1;
    //         roomEvent4 = 1;
    //         roomEvent5 = 1;
    //         roomEvent9 = 1;
    //         openInventory("inventory.txt");
    //         break;
    //     default:
    //         clearScreen();
    //         gameloop();
    //         break;
    //     }
    return;
}

int openInventory(const char* fileName){
    clearScreen();
    printf("\n\t\t=========================");
    printf("\n\t\t| Inventory:            |\n");
    printf("\n\t\t|                       |\n");
    FILE* myFile = fopen(fileName, "r");
    if(myFile == NULL)
    {
        fputs("Cannot open the file\n", stderr);
        return EXIT_FAILURE;
    }
    
    char ch;
    while ((ch = fgetc(myFile)) != EOF)
        putchar(ch);

    fclose(myFile);
    printf("\n\t\t|                       |");
    printf("\n\t\t=========================");
    printf("\n\n\n\n\t\tLeave the inventory by pressing Enter: ");
    getchar();
    gameloop();
}

void addInventory(){
    FILE* myFile = fopen("inventory.txt", "w+");
    fprintf(myFile, "\t\t - %s", item);
    fclose(myFile);
    return;
}

void roomAction(){
    switch (currentMazeCell)
    {
        case 1:
            printf("\n\n\t\t\t\tYou crossed the door, and arrived at the 1st room.\n");
            printf("\n\n\t\t\tYou are walking in this room, looking for something that might help you.\n");
            printf("\n\n\t\t\t\tYou found some moisty furniture, nothing interesting.\n");
            printf("\n\n\t\t\t\tHowever, a monster woke up in front of you. \n");
            printf("\n\n\n\n\n\n\n\n\t\tPress Enter to continue:  ");
            getchar();
            fightRoom1();
            break;
        case 4:
            printf("\n\n\t\t\t\tYou went upstairs, and arrived at the 4th room.\n");
            printf("\n\n\t\t\tYou are walking in this room, looking for something that might help you.\n");
            printf("\n\n\t\t\t\t\t  You found a dull knife.\n");
            char item = "Dull Knife";
            addInventory();
            printf("\n\n\t\t\t\t   A monster appeared and scared you. \n");
            printf("\n\n\n\n\n\n\n\n\t\tPress Enter to continue:  ");
            getchar();
            fightRoom4Surprise();
            break;
        case 5:
            printf("\n\n\t\t\t\t\t  You arrived at the 5th room.\n");
            printf("\n\n\t\t\t\t\t   You felt a little warmer.\n");
            printf("\n\n\t\t\t\t   The silence was broken by a painful growl.\n");
            printf("\n\n\t\t\t\t\t  You went forward that noise.\n");
            printf("\n\n\n\n\n\n\n\n\t\tPress Enter to continue:  ");
            getchar();
            healRoom();
            break;
        case 9:
            // printf("\n\n\t\t\t\t\t You arrived at the 5th room.\n");
            // printf("\n\n\t\t\t\t\t  You felt a little warmer.\n");
            // printf("\n\n\t\t\t\t  The silence was broken by a painful growl.\n");
            // printf("\n\n\t\t\t\t\t  You went forward that noise.\n");
            // printf("\n\n\n\n\n\n\n\n\t\tPress Enter to continue:  ");
            // getchar();
            //Room9();
            nowInDevelopment();
            break;
        default:
            mazeBegin();
            gameloop();
            break;
    }
    return;
}

void transition(){
    printf("\n\t\t\t\tPress any key to continue:  ");
    getchar();
    gameloop();
}

void gameloop(){
    currentMaze();
    roomEvent = 0;
    printf("\t Your HP bar: %d", hp);
    actionText();
    printf("\n\t Look at your inventory typing '5'. ");
    printf("\n\n\t Choose your action:  ");
    directionF();
    clearScreen();
    printf("end of gameloop");
    getchar();
    gameloop();
}

void nowInDevelopment(){
    clearScreen();
    printf("\n\n\n\t\t\t\t\tThis game is still in development.");
    printf("\n\n\t\t\t\t\tI wish you enjoyed, and are waiting for more!");
    getchar();
    abort();
}