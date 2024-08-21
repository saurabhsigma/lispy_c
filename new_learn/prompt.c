#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
// #include <editline/history.h>


// Declare a buffer for user input of size 2048 
// static char input [2048];

int main (int argc, char** argv) {
    // puts("Hello, world!");
    /* Print Version and Exit Information */
    puts("divy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    // in a never ending loop
    while(1){
        // outputs our prompt
        // fputs("lispy> ",stdout);

        char* input = readline("lispy> ");

        // adding input to history
        add_history(input);

        // read a line of user input of maximum size 2048
        // fgets(input, 2048, stdin);

        // echo input back to the user
        printf("No you're a %s\n", input);

        // free retrieved input
        free(input);
    }


    return 0;
}