#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login(char *username) {
    char inputUser[50];
    char inputPass[50];
    char existingUser[50];
    char existingPass[50];
    FILE *file;

    file = fopen("users.txt", "r");
    if (file == NULL) {
        perror("Unable to open file for reading");
        return 0;
    }

    printf("Enter username:\n");
    scanf("%s", inputUser);
    printf("Enter password:\n");
    scanf("%s", inputPass);

    while (fscanf(file, "%s %s", existingUser, existingPass) != EOF) {
        if (strcmp(existingUser, inputUser) == 0 && strcmp(existingPass, inputPass) == 0) {
            strcpy(username, existingUser);
            fclose(file);
            printf("Login successful!\n");
            printf("Welcome, %s!\n", username); // <-- your custom message
            printf("\nPress Enter to exit...");
            getchar(); // Consume leftover newline
            getchar(); // Wait for user to press Enter
            return 1;
        }
    }
    fclose(file);
    printf("Invalid username or password.\n");
    ///// Code By Aya Guair
    return 0;
}