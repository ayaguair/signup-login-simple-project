#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "signup.h"
#include "login.h"

int main() {
    int choice;
    char username[50];

    while (1) {
        choice = menu(); // Display the menu and get user choice
        switch (choice) {
            case 1:
                signup();
                break;
            case 2:
                if (login(username)) { // login returns 1 if successful
                    return 0; // Exit the program after successful login
                } else {
                    printf("Login failed.\n");
                }
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    printf("Code By Aya Guair.\n");
    return 0;
}
///// Code By Aya Guair