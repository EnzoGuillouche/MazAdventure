#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>


typedef struct inventory
{
    char name[50];
} item_t;

item_t item, item1, item2, item3;

// Directly assigning string literals to the array
void assignItems(item_t a, item_t b, item_t c, item_t d){
    a.name, "NULL\n";
    b.name, "Dull Knife\n";
    c.name, "Warm Furr\n";
    d.name, "Damaged Helmet\n";
}




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

void addInventory(item_t object){    //add an item into the inventory file 
    FILE* myFile = fopen("inventory.txt", "w+");
    fprintf(myFile, "\t\t\t\t\t\t\t\t\t\t   - %s\n", object.name);
    fclose(myFile);
    return;
}