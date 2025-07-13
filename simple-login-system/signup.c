#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void signup(){
    char username[50];
    char password[50];
    char confirm[50];
    char existingUser[50];
    char existingPass[50];
    int exists;
    FILE *file;
    do{
        exists = 0; // Reset exists flag for each new attempt
        file = fopen("users.txt", "r"); // Open file in read mode
        printf("Enter username:\n");
        scanf("%s", username);//check if username already exists
        if(file != NULL){
            while(fscanf(file, "%s %s", existingUser, existingPass) != EOF){ //keep scanning the entire file for similar usernames
                if(strcmp(existingUser, username) == 0){
                    exists = 1;
                    printf("Username already exists. Please choose a different username:\n");
                    break;
                }
            }
            fclose(file);
        }
   } while (exists == 1);

    // Ask for password and confirmation
    printf("Enter your password: ");
    scanf("%s", password);
    printf("Confirm your password: ");
    scanf("%s", confirm);

    if (strcmp(password, confirm) != 0) {
        printf("Passwords do not match. Registration failed.\n");
        return;
    }

    // Save new user to file
    file = fopen("users.txt", "a");
    if (file == NULL) {
        printf("Failed to open file for writing.\n");
        return;
    }

    fprintf(file, "%s %s\n", username, password);
    fclose(file);
    ///// Code By Aya Guair
    printf("Registration successful! Welcome, %s.\n", username);
}