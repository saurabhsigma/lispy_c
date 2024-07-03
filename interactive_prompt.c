// #include <stdio.h>
// 
// 
// // declare a global array of 2048 characters, static keyword makes the variable local to this file, and the [2048] part is what declares the size.
// // declare a buffer for user input of size 2048
// static char input[2048];
// 
// int main(int argc, char** argv){
// // 	print the version and exit information
// 
// 	puts("Lispy Version 0.0.0.0.1");
// 	puts("Press Ctrl+c to Exit\n");
// 	
// // 	in  never ending loop 
// 	while(1){
// 	
// 		// output our prompt
// 		fputs("lispy> ", stdout);
// 		
// 		// read a line of user input of maximum size 2048
// 		fgets(input, 2048, stdin);
// 		
// 		// Echo input back to user
// 		printf("No you're a %s\n", input);
// 	}
// 	
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// #include <editline/readline.h>
// // #include <editline/history.h>

// int main(int argc, char** argv){

// 	// print the version and exit information:
// 	puts("Lispy Version 0.0.0.0.1");
// 	puts("Press Ctrl+c to Exit\n");
	
// 	// In a never ending loop 
	
// 	while(1){
		
// 		//output our prompt and get input
// 		char* input = readline("lispy> ");
		
// 		//  add input to history
// 		add_history(input);
		
// 		// echo input back to the user 
// 		printf("No you're a %s\n", input);
		
// 		//free retrieved input
// 		free(input);	
// 	}
	
// 	return 0;
// }

#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv){

	/* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");


  while(1){

  /* Output our prompt */
    fputs("lispy> ", stdout);

	// /* Read a line of user input of maximum size 2048 */
    // fgets(input, 2048, stdin);

	fgets(input, 2048,stdin);


	printf("No you are a %s", input);
  }

  return 0;
}