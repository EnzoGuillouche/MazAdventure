int currentMazeCell = 0;
int roomEvent1;
int roomEvent4;
int roomEvent5;
int roomEvent9;

void currentMaze(){
    switch (currentMazeCell)
    {
        case 1:
            clearScreen();
            switch (roomEvent1)
            {
            case 1:
                maze1();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 4:
            clearScreen();
            switch (roomEvent4)
            {
            case 1:
                maze4();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 5:
            clearScreen();
            switch (roomEvent5)
            {
            case 1:
                maze5();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 9:
            clearScreen();
            switch (roomEvent9)
            {
            case 1:
                maze9();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 10:
            clearScreen();
            switch (roomEvent9)
            {
            case 1:
                maze9();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        case 13:
            clearScreen();
            switch (roomEvent9)
            {
            case 1:
                maze9();
                break;
            
            default:
                roomAction();
                break;
            }
            break;
        default:
            mazeBegin();
            break;
    }
}



void mazeBegin(){
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t===============================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t| 12                      _ _  13                     _ _  14                     _ _  15                     |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->           EXIT          |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t============|##|========================|##|===================================================================");
    printf("\n\t\t\t\t\t\t\t\t|  8                      | |   9                     _ _  10                     _ _  11                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t========================================|##|====================================================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  4                      _ _  5                      _ _  6                      | |  7                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t===========|###|========================|##|========================|##|========================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  0                      _ _  1                      | |  2                      _ _  3                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|           YOU           -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         | |                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t===============================================================================================================\n\n\n");
    return;
}

void maze1(){
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t===============================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t| 12                      _ _  13                     _ _  14                     _ _  15                     |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->           EXIT          |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t============|##|========================|##|===================================================================");
    printf("\n\t\t\t\t\t\t\t\t|  8                      | |   9                     _ _  10                     _ _  11                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t========================================|##|====================================================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  4                      _ _  5                      _ _  6                      | |  7                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t===========|###|========================|##|========================|##|========================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  0                      _ _  1                      | |  2                      _ _  3                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->           YOU           | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         | |                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t===============================================================================================================\n\n\n");
}

void maze4(){
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t===============================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t| 12                      _ _  13                     _ _  14                     _ _  15                     |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->           EXIT          |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t============|##|========================|##|===================================================================");
    printf("\n\t\t\t\t\t\t\t\t|  8                      | |   9                     _ _  10                     _ _  11                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t========================================|##|====================================================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  4                      _ _  5                      _ _  6                      | |  7                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|           YOU           -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t===========|###|========================|##|========================|##|========================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  0                      _ _  1                      | |  2                      _ _  3                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         | |                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t===============================================================================================================\n\n\n");
    return;
}

void maze5(){
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t===============================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t| 12                      _ _  13                     _ _  14                     _ _  15                     |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->           EXIT          |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t============|##|========================|##|===================================================================");
    printf("\n\t\t\t\t\t\t\t\t|  8                      | |   9                     _ _  10                     _ _  11                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t========================================|##|====================================================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  4                      _ _  5                      _ _  6                      | |  7                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->           YOU           <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t===========|###|========================|##|========================|##|========================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  0                      _ _  1                      | |  2                      _ _  3                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         | |                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t===============================================================================================================\n\n\n");
    return;
}

void maze9(){
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t===============================================================================================================");
    printf("\n\t\t\t\t\t\t\t\t| 12                      _ _  13                     _ _  14                     _ _  15                     |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->           EXIT          |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t|                                                     -->                         -->                         |");
    printf("\n\t\t\t\t\t\t\t\t============|##|========================|##|===================================================================");
    printf("\n\t\t\t\t\t\t\t\t|  8                      | |   9                     _ _  10                     _ _  11                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |           YOU                                                                   |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                         _ _                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t|                         | |                                                                                 |");
    printf("\n\t\t\t\t\t\t\t\t========================================|##|====================================================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  4                      _ _  5                      _ _  6                      | |  7                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         _ _                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         <--                         | |                         |");
    printf("\n\t\t\t\t\t\t\t\t===========|###|========================|##|========================|##|========================|##|===========");
    printf("\n\t\t\t\t\t\t\t\t|  0                      _ _  1                      | |  2                      _ _  3                      |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         _ _                         | |                         _ _                         |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t|                         -->                         | |                                                     |");
    printf("\n\t\t\t\t\t\t\t\t===============================================================================================================\n\n\n");
    return;
}