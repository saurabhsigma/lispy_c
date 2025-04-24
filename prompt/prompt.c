// REPL - read evaluate print loop.

// We are going to make a system that prompts the user, and echoes any input straight back. If we make this we can later extend it to parse the user input and evaluate it, as if it were an actual Lisp program.

// An interactive prompt

// #include <stdio.h>
// // delare a buffer for user input of size 2048
// // A buffer is just a temporary area in memory (usually RAM) that stores data before it gets used or moved somewhere else.
// static char input[2048];
// // This declares global array of 2048 characters. can acces from anywehre in our program. the static keyword makes this variable local to this file, and teh [2048] section is what declares the size.

// int main(int argc, char** argv){
//     // print version and exit information
//     puts("Lispy Version 0.0.0.0.1");
//     puts("Press Ctrl+c to Exit\n");

//     // in a never ending loop
//     while(1) {
//         // output our prompt
//         fputs("lispy> ", stdout);
        
//         // read a line of user input of maximum size 2048
//         fgets(input, 2048, stdin);

//         // echo input back to user
//         printf("No you're a %s",  input );

//     }
//     return 0;
// }

// when we are using the arrow keys it is behaving very wierdly
// lispy> ^[[A^[[A^[[D^[[A^[[D^[[B^[[B^[[C^[[C
// so we gonna use editline
// The library editline provides two functions we are going to use called readline and add_history.

// This first function, readline is used to read input from some prompt, while allowing for editing of that input. The second function add_history lets us record the history of inputs so that they can be retrieved with the up and down arrows.

// We replace fputs and fgets with calls to these functions to get the following
// #include <stdio.h>
// #include <stdlib.h>
// // this gives us acces to the free function used later on this code.

// #include <editline/readline.h>
// // #include <editline/history.h>

// int main(int argc, char** argv){

//     /* Print Version and Exit Information */
//   puts("Lispy Version 0.0.0.0.1");
//   puts("Press Ctrl+c to Exit\n"); 

// //   In a never ending loop
// while(1){
//     // output our prompt and get input
//     char* input = readline("lispy> ");

//     // add input to history
//     add_history(input);

//     // echo input back to user
//     printf("No you're a %s\n", input);

//     // free retrieved input
//     free(input);
// }
// return 0;
// }


// the running command must include -ledit for the compilation of the editline feature
// cc -std=c99 -Wall prompt.c -ledit -o prompt

// The C preprocessor
// The preprocessor is a program that runs before the compiler


// 


// prompt.c (on unix)
#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
// #include <editline/history.h>

int main(int argc, char** argv) {
   
  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");
   
  /* In a never ending loop */
  while (1) {
    
    /* Output our prompt and get input */
    char* input = readline("lispy> ");
    
    /* Add input to history */
    add_history(input);
    
    /* Echo input back to user */    
    printf("No you're a %s\n", input);

    /* Free retrived input */
    free(input);
    
  }
  
  return 0;
}
