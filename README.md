# Simple Shell in C Programming

This project aims to create a basic shell using C programming. The shell will provide fundamental functionalities to interact with the system through commands.

## Features:

### 1. Display Prompt
The shell will display a prompt to indicate that it's ready to accept user commands.

### 2. Read Inputs/Commands
It will read inputs or commands entered by the user.

### 3. Parse and Tokenize Inputs/Commands
The input commands will be parsed and tokenized to separate different components.

### 4. Search and Parse Commands
The shell will search for commands entered by the user and parse them to understand the action requested.

### 5. Create a Child Process
Upon receiving a command, the shell will create a child process to execute it.

### 6. Wait on the Child Process
The shell will wait for the child process to finish execution before proceeding.

### 7. Execute Commands
The main functionality of the shell is to execute commands entered by the user.

### 8. Return to Prompt
After executing a command, the shell will return to displaying the prompt for the next input.

### 9. Handle Errors
Error handling will be implemented to manage different scenarios, such as incorrect commands or system-related errors.

### 10. Exit Shell
The shell will provide an option to exit gracefully, terminating the program.

## Usage:

To use the shell:
1. Compile the C code using a C compiler (`gcc shell.c -o shell`).
2. Run the compiled executable (`./shell`).
3. You will see the shell prompt, where you can enter commands.
4. Type `exit` to exit the shell.

## Example Commands:
- `ls`: List contents of the current directory.
- `cd <directory>`: Change the current directory.
- `mkdir <directory_name>`: Create a new directory.
- `rm <file_name>`: Remove a file.
- `echo <text>`: Print text to the terminal.

## Error Handling:
The shell will handle errors gracefully and provide appropriate messages to the user in case of invalid commands or system errors.

## Notes:
- This is a simple implementation and may not cover all possible shell functionalities.
- Contributions and improvements are welcome.
