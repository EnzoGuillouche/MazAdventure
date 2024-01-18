int currentMazeCell = 0;

void currentMaze(){
    clearScreen();
    switch (currentMazeCell)
    {
        case 0:
            mazeBegin();
            break;
        case 1:
            maze1();
            break;
    }
    return;
}



void mazeBegin(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|  |======================|  |==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|          YOU                                    | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}

void maze1(){
    clearScreen();
    printf("    \n");
    printf("\n\t=======================================================================================================");
    printf("\n\t| 12                    _ _  13                   _ _  14                   _ _  15                   |");
    printf("\n\t|                                                                                        EXIT         |");
    printf("\n\t|                       _ _                       _ _                       _ _                       |");
    printf("\n\t|                                                                                                     |");
    printf("\n\t===========|##|=====================|##|===============================================================");
    printf("\n\t|  8                    | |   9                   _ _  10                   _ _  11                   |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t|                       | |                       _ _                       _ _                       |");
    printf("\n\t|                       | |                                                                           |");
    printf("\n\t====================================|##|=================================================|##|==========");
    printf("\n\t|  4                    _ _  5                    _ _  6                    | |  7                    |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t|                       _ _                       _ _                       | |                       |");
    printf("\n\t|                                                                           | |                       |");
    printf("\n\t==========|###|=====================|##|=======================|##|======================|##|==========");
    printf("\n\t|  0                    _ _  1                    | |  2                    _ _  3                    |");
    printf("\n\t|                                    YOU          | |                                                 |");
    printf("\n\t|                       _ _                       | |                       _ _                       |");
    printf("\n\t|                                                 | |                                                 |");
    printf("\n\t=======================================================================================================\n");
    return;
}