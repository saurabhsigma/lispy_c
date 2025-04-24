#include <stdio.h> // header

int main(int argc, char** argv) {
    puts("Hello, world!");
    return 0;
}



// to compile, use command - 
// cc -std=c99 -Wall hello_woprld.c -o hello_world
// we use -std=c99 flag to tell the compiler whcih version or standard of C we are using.

// bonus section chapter -2

// 1. change the hello world! greeting given by your program to something different.

// #include <stdio.h> // header

// int main(int argc, char** argv) {
//     puts("Hello, Saurabh!");
//     return 0;
// }

// 2. what happens when no main function is given?

// In a C program, the main function serves as the entry point for execution. If your program does not contain a main function, the following happens:
// undefined reference to `main`

// 3. use the online documentation to lookup the puts function.
// ​The puts function in C is a standard library function defined in the <stdio.h> header file. It is used to write a string to the standard output stream (stdout), followed by a newline character

// #include <stdio.h>

// int puts(const char *s);

// Parameter: s is a pointer to a null-terminated string that you want to print.

// Return Value: On success, puts returns a non-negative number. On failure, it returns EOF and sets the error indicator for the stream.​
// The puts function writes the string pointed to by s, followed by a newline character, to the standard output stream stdout. The terminating null byte ('\0') of the string is not written
// https://en.cppreference.com/w/c/io/puts



// 4. look up how to use gdb  and run it with your program
// i dont wanna compile it through gdb, i have looked up though the process to run it, i am fine with clang cc