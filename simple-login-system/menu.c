#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 int menu(){
    int choice;
    printf("Menu:\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Please enter your choice number: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 3){
        printf("Invalid choice. Please try again.\n");
        return menu(); // Recursively call menu until a valid choice is made
    }
    ///// Code By Aya Guair
    return choice;
 }