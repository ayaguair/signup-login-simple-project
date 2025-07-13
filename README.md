# signup-login-simple-project
This project is a terminal-based login system written in C. It allows users to register with a unique username and password, confirm their credentials, and log in using saved data. The system stores credentials in a local text file and uses modular design principles to keep the code clean and organized across multiple source files.

# C Login System (Terminal-Based)

This is a simple terminal-based login and registration system written in C.  
It uses file handling to manage user credentials and demonstrates modular design by organizing logic into separate source files.

---

## Features

- User registration with password confirmation
- Duplicate username check
- Login with stored credentials
- Stores user data in `user.txt`
- Modular structure using `.c` and `.h` files

---

## Project Structure

main.c
menu.c
signup.c
login.c

---

# How to Compile and Run

### On Linux / macOS/ WSL

``` gcc main.c menu.c signup.c login.c -o login ```

### On Windows using MinGW and gcc

``` gcc main.c signup.c login.c menu.c -o simple-login.exe ```

# Sample Interaction

Menu:
1. Register
2. Login
3. Exit
   
Please enter your choice number: 1
Enter username:
user

Enter your password: 1234
Confirm your password: 1234
Registration successful! Welcome, user.

Menu:
1. Register
2. Login
3. Exit
   
Please enter your choice number: 2
Enter username:
user

Enter password:
1234

Login successful!
Welcome, user!

Press Enter to exit...

# What I learned

Handling file input/output in C

Comparing strings and validating input

Preventing duplicate user entries

Writing modular C programs with multiple source files

Building portable, cross-platform C applications

