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


void assignItems(item_t item, item_t item1, item_t item2, item_t item3){
    strcpy(item.name, "empty");
    strcpy(item1.name, "Dull Knife");
    strcpy(item2.name, "Warm Furr");
    strcpy(item3.name, "Damaged Helmet");
}





int openInventory(const char* fileName, item_t object){    //opens the inventory file and displays it in-game
    clearScreen();
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t=========================\n");
    printf("\t\t\t\t\t\t\t\t\t\t|       Inventory:      |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t| ");
    FILE* myFile = fopen(fileName, "r");
    if(myFile == NULL)
    {
        fputs("Error: Cannot open the file\n", stderr);
        sleep(3);
        abort();
    }
    
    char ch;
    while ((ch = fgetc(myFile)) != EOF)
        putchar(ch);

    fclose(myFile);
    if (object.name[0] == 'e'){
        printf("\t\t\t\t\t\t\t\t\t\t                      |\n");}
    else if (object.name[0] == 'D'){
        if (object.name[1] == 'u'){
            printf("\t\t\t\t\t\t\t\t\t\t              |\n");}
        else if (object.name[1] == 'a'){
            printf("\t\t\t\t\t\t\t\t\t\t          |\n");}}
    else{
        printf("\t\t\t\t\t\t\t\t\t\t               |\n");}
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t\t\t\t\t\t=========================\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Leave the inventory by pressing Enter: ");
    getchar();
    gameloop();
}

void addInventory(item_t object){    //add an item into the inventory file 
    FILE* myFile = fopen("inventory.txt", "w+");
    if (object.name[0] != 'D' || object.name[0] != 'W'){
        if (object.name[0] != 'e'){
            printf("Error: Item %s not found.\n", object.name);
            sleep(3);
            abort();}
        else {
            printf("Error: Allocation issue occured with %s.\n", object.name);
            sleep(3);
            abort();}
    }
    else{
        fprintf(myFile, "- %s\n", object.name);
        fclose(myFile);
        return;
    }
}