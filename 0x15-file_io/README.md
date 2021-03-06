# C - File I/O
This topic was aimed at understanding how Files I/O is handled in C. That was achieved by looking at file descriptors and understanding use of `read`, `open`, `close`, `read`,
`write` and `dprintf` in C. The following task files helped in grasping various concepts
## 0-read_textfile.c
Function that reads a text file and prints it to the POSIX standard output.
* Prototype: `ssize_t read_textfile(const char *filename, size_t letters)`;
* where `letters` is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, returns `0`
* if `filename` is `NULL` returns `0`
* if `write` fails or does not write the expected amount of bytes, returns `0`

## 1-create_file.c
Function that creates a file.
* Prototype: `int create_file(const char *filename, char *text_content)`;
* where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file
* Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…)
* The created file has these permissions: `rw-------`. If the file already exists, no permissions are changed.
* if the file already exists, it's truncated
* if `filename` is `NULL` returns `-1`
* if `text_content` is `NULL` empty file is created

## 2-append_text_to_file.c
Function that appends text at the end of a file.
* Prototype: `int append_text_to_file(const char *filename, char *text_content)`;
* where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file
* Return: `1` on success and `-1` on failure
* Doesn't create the file if it does not exist
* If `filename` is `NULL` returns `-1`
* If `text_content` is `NULL`, doesn't add anything to the file. Returns `1` if the file exists and -`1` if the file does not exist or if you do not have the required permissions to write the file

## 3-cp.c
Program that copies the content of a file to another file.
* Usage: `cp file_from file_to`
* if the number of argument is not the correct one, exits with code `97` and prints `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error
* if `file_to` already exists, it's truncated
* if `file_from` does not exist, or if it can't be read, exits with code `98` and prints `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error
        * where `NAME_OF_THE_FILE` is the first argument passed to your program
* if create or write to `file_to` fails, exits with code `99` and prints `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error
        * where `NAME_OF_THE_FILE` is the second argument passed to your program
* if can not close a file descriptor , exits with code `100` and prints `Error: Can't close fd FD_VALUE`, followed by a new line, on the `POSIX` standard error
        * where `FD_VALUE` is the value of the file descriptor
* Permissions of the created file: `rw-rw-r--`. If the file already exists, doesn't change the permissions
* Reads `1,024` bytes at a time from the `file_from` to make less system calls. A buffer is used
* Allowed to use `dprintf`

## holberton.h
Contains all function prototypes and declaraations and header files.
