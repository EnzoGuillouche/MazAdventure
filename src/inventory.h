#include <strings.h>

char item[];
char item1[] = "Dull Knife\n";   //item Dull Knife
char item2[] = "Warm Furr\n";   //item Warm Furr
char item3[] = "Damaged Helmet\n";   //item Damaged Helmet



int openInventory(const char* fileName){    //opens the inventory file and displays it in-game
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t=========================\n");
    printf("\t\t\t\t\t\t\t\t\t\t|       Inventory:      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    FILE* myFile = fopen(fileName, "r");
    if(myFile == NULL)
    {
        fputs("Cannot open the file\n", stderr);
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(myFile)) != EOF)
        putchar(ch);

    fclose(myFile);
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t=========================\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Leave the inventory by pressing Enter: ");
    getchar();
    gameloop();
}

void addInventory(){    //add an item into the inventory file 
    FILE* myFile = fopen("inventory.txt", "w+");
    fprintf(myFile, "\t\t\t\t\t\t\t\t\t\t   - %s\n", item);
    fclose(myFile);
    return;
}