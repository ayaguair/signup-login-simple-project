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

## How to Compile and Run

### On Linux / macOS / WSL

```bash
gcc main.c menu.c signup.c login.c -o login
./login

### On Windows (Using MinGW)

gcc main.c menu.c signup.c login.c -o login.exe
login.exe

1. Register
2. Login
3. Exit

Enter your choice: 1
Enter a new username: user1
Enter your password: pass123
Confirm your password: pass123
Registration successful

Enter your choice: 2
Enter your username: user1
Enter your password: pass123
Login successful!
Welcome.

Press Enter to exit...
####################################################
What I Learned
Handling file input/output in C

Comparing strings and validating input

Preventing duplicate user entries

Writing modular C programs with multiple source files

Building portable, cross-platform C applications
