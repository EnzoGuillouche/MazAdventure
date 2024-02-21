#include "maze-map.h"
#include "inventory.h"

int hp = 20;                    //HP variable
int hpMonster = 10;             //monster HP variable
int choice;                     //choice variable
int fightChoice;                //fight choice variable
int direction;                  //direction variable
char item[];
char item1[] = "Dull Knife\n";   //item Dull Knife
char item2[] = "Warm Furr\n";   //item Warm Furr
char item3[] = "Damaged Helmet\n";   //item Damaged Helmet

void clearScreen() {
    //printf("\033[2J\033[1;1H"); //clear the console, not the terminal
    system("cls");                //clear the terminal, not the console (recommended)
}  

void choiceMenu(){  //intro function
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t     Press Enter to play  ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tThis game is a minimalist project done during student free time. \n\n\t\t\t\tAny resemblance to other products or intellectual properties is purely coincidental and is intended as a homage to the inspirations that have shaped our creative journey. ");
    getchar();
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tYou fell into the oblivion, into a dark and moisty room.");
    printf("\n\n\t\t\t\t\t\t\t\t\t\tThis place looks like it's another dimension, the darkside of the real world.");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tYou realise that you need to get out of this place, or.. something would happen.");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tYou have to move throughout a maze to find the exit. ");
    printf("\n\n\t\t\t\t\t\t\t\t\t\tYou can move one room by room, encounter monsters and find traps. ");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tYou'll execute actions with numbers and the Enter key. \n\n\t\t\t\t\t\t\t\t\t\tThe choices will be displayed to know when to use certain keys. ");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPress Enter to continue:  ");
    getchar();
    return;
}


void actionText(){  //function that specifies where you are and where you can go
    switch (currentMazeCell)
    {
    case 0:
        printf("\n\n\t\t\t\t\t\t\t You are located in room 0.");
        printf("\n\t\t\t\t\t\t\t You can go to the right (1) or go upstairs (2).\n");
        break;
    case 1:
        printf("\n\n\t\t\t\t\t\t\t You are located in room 1.");
        printf("\n\t\t\t\t\t\t\t You can go upstairs (2).\n");
        break;
    case 4:
        printf("\n\n\t\t\t\t\t\t\t You are located in room 4.");
        printf("\n\t\t\t\t\t\t\t You can go to the right (1).\n");
        break;
    case 5:
        printf("\n\n\t\t\t\t\t\t\t You are located in room 5.");
        printf("\n\t\t\t\t\t\t\t You can go upstairs (2).\n");
        break;
    case 9:
        printf("\n\n\t\t\t\t\t\t\t You are located in room 9.");
        printf("\n\t\t\t\t\t\t\t You can go to the right (1) or go upstairs (2).\n");
        break;
    default:
        break;
    }
    
}

void directionF(){  //function that analyses where you want to go depending on where you currently are
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
                openInventory("inventory.txt");
                break;
            default:
                printf("\n\t\t\t\t\t\t\t You cannot go this way.");
                getchar();
                gameloop();
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
                roomEvent1 = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\n\t\t\t\t\t\t\t You cannot go this way.");
                getchar();
                roomEvent1 = 1;
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
                roomEvent4 = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\n\t\t\t\t\t\t\t You cannot go this way.");
                getchar();
                roomEvent4 = 1;
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
                roomEvent5 = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\n\t\t\t\t\t\t\t You cannot go this way.");
                getchar();
                roomEvent5 = 1;
                gameloop();
                break;
            return;
        }
    case 9:
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
                roomEvent9 = 1;
                openInventory("inventory.txt");
                break;
            default:
                printf("\n\t\t\t\t\t\t\t You cannot go this way.");
                getchar();
                roomEvent9 = 1;
                gameloop();
                break;
            return;
        }
    }
    return;
}


void roomAction(){  //displays the scenario of the room in particular
    switch (currentMazeCell)
    {
        case 1:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t You crossed the door, and arrived at the 1st room.\n");
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t     What do you want to do?  \n\n\n\t\t\t\t\t\t\t\t\t\t\t(1) to explore the room  (2) to open the inventory. "); //choice of action
            scanf("%d", &choice);
            getchar();
            switch (choice)
            {
                case 1:
                    clearScreen();
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tYou are walking in this room, looking for something that might help you.\n");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t You found some moisty furniture, nothing interesting.\n");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tHowever, a monster woke up in front of you. \n");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPress Enter to continue:  ");
                    getchar();
                    fightRoom1();   //switches to the content of the room
                    break;
                case 2:
                    openInventory("inventory.txt"); 
                    clearScreen();
                    roomAction();
                    break;
                default:
                    clearScreen();
                    roomAction();
                    break;
                break;
            }
        case 4:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  You went upstairs, and arrived at the 4th room.\n");
            printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t    What do you want to do?  \n\n\n\t\t\t\t\t\t\t\t\t\t\t(1) to explore the room  (2) to open the inventory.  "); //choice of action
            scanf("%d", &choice);
            getchar();
            switch (choice)
            {
                case 1:
                    clearScreen();
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tYou are walking in this room, looking for something that might help you.\n");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t       You found a dull knife.\n");
                    strcpy(item, item1);
                    addInventory();            //adds the Dull Knife into the inventory
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t          A monster appeared and scared you. \n");
                    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t              Press Enter to continue:  ");
                    getchar();
                    fightRoom4Surprise();   //switches to the content of the room
                    break;
                case 2:
                    openInventory("inventory.txt"); 
                    clearScreen();
                    roomAction();
                    break;
                default:
                    clearScreen();
                    roomAction();
                    break;
            }
            break;
        case 5:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   You arrived at the 5th room.\n");
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t     What do you want to do?  \n\n\n\t\t\t\t\t\t\t\t\t\t\t(1) to explore the room  (2) to open the inventory.   "); //choice of action
            scanf("%d", &choice);
            getchar();
            switch (choice)
            {
                case 1:
                    clearScreen();                    
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You walked through the room.\n");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t   The silence was broken by a dreadful growl.\n");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You went towards that noise.\n");
                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t    Press Enter to continue:  ");
                    getchar();
                    healRoom();   //switches to the content of the room
                    break;
                case 2:
                    openInventory("inventory.txt");
                    clearScreen();
                    roomAction();
                    break;
                default:
                    clearScreen();
                    roomAction();
                    break;
            }
            break;
        case 9:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t You climbed a ladder to reach the 9th room.\n");
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t   What do you want to do?  \n\n\n\t\t\t\t\t\t\t\t\t\t\t     (1) to explore the room  (2) to open the inventory.   "); //choice of action
            scanf("%d", &choice);
            getchar();
            switch (choice)
            {
            case 1:
                clearScreen();
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t              You walked a bit, and heard a noise of digging.");
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t  You came closer to the noise, and then saw two little monsters digging.");
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t             They didn't look harmful, so you came even closer. ");
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t    Press Enter to continue:  ");
                getchar();
                Room9();   //switches to the content of the room
                break;
            case 2:
                openInventory("inventory.txt");
                clearScreen();
                roomAction();
                break;
            default:
                clearScreen();
                roomAction();
                break;
            }
            break;
        case 10:
            nowInDevelopment();
            break;
        case 13:
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t You kept going straight ahead, and arrived at the 13th room.\n");
            printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t  What do you want to do?  \n\n\n\t\t\t\t\t\t\t\t\t\t\t     (1) to explore the room  (2) to open the inventory.   "); //choice of action
            scanf("%d", &choice);
            getchar();
            switch (choice)
            {
            case 1:
                clearScreen();
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t    Press Enter to continue:  ");
                getchar();
                Room13();   //switches to the content of the room
                break;
            case 2:
                openInventory("inventory.txt");
                clearScreen();
                roomAction();
                break;
            default:
                clearScreen();
                roomAction();
                break;
            }
            break;
        default:
            mazeBegin();
            gameloop();
            break;
    }
    return;
}

void transition(){  //a transition function
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tPress any key to continue:  ");
    getchar();
    gameloop();
}

void gameloop(){    //the function that the game executes the most
    currentMaze();  //displays the current maze depending on in which room you are in
    printf("\t\t\t\t\t\t\t Your HP bar: %d", hp);   //displays the player's current HP 
    actionText();   //tells the player what he can do
    printf("\n\t\t\t\t\t\t\t Look at your inventory typing '5'. ");  //tells the player that he can open his inventory
    printf("\n\n\t\t\t\t\t\t\t Choose your action:  ");    
    switch (currentMazeCell)  //resets the room's event
    {
    case 1:
        roomEvent1 = 0;
        break;
    case 4:
        roomEvent4 = 0;
        break;
    case 5:
        roomEvent5 = 0;
        break;
    case 9:
        roomEvent9 = 0;
        break;
    default:
        break;
    }
    directionF();   //calls the direction function
    clearScreen();  
    printf("\n\tend of gameloop, unexpected behavior, enter to end the program");  //if the process access to this, it isn't normal
    getchar();
    clearScreen();
    abort();
}

void nowInDevelopment(){    //displays a "now in development" message just before ending the program
    clearScreen();
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tThis game is still in development.\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  I wish you enjoyed, and are waiting for more!  ");
    getchar();
    clearScreen();
    abort();
}