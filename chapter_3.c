// int count;
// int count = 10;

// // function declarations
// int add_integers(int x, int y) {
//     int result = x+ y;
//     return result;

// }
// int added = add_integers(1,2);

// // structure declarations
// typedef struct {
//     float x;
//     float y;
// }point ;

// point p;
// p.x = 0.1;
// p.y = 10.0;

// flaot length = sqrt(p.x*p.x + p.y*p.y);


// // pointers
// // a pointer is a variation on a normal type where the type name is suffixed with an asterisk.
// // int*. We already saw a pointer type char** argv. Tbis is a pointer to poniters to characters, and is used as input to main functon.

// // logical operators are- || for or, && for and.

// // conditionals
// // if (x>10 && x<100){
// //     puts("x is greater than 10 and less than 100!");

// // }else{
// //     puts("x is less than 11 or greater than 99!");
// // }

// // loops
// // int i =10;
// // while(i>0){
// //     puts("Loop Iteration");
// //     i = i -1;
// // }

// // for (int i =0; i<10; i++){
// //     puts("Loop Iterations");
// // }


// // bonus 
// // Q. what does the typedef keyword exactly do?


// // The typedef keyword in C is used to create a new name (alias) for an existing data type. It helps make code easier to read and manage — especially when you're dealing with complex types like structs or function pointers.

// // 🔤 Think of it like a nickname
// // Imagine you're tired of saying "Jonathan", so you just call your friend "Jon" — that's what typedef does for data types.

// // typedef unsigned int uint;

// // uint age = 30;  // instead of "unsigned int age = 30;"

// // without typedef 

// // struct Person {
// //     char name[50];
// //     int age;
// // };

// // struct Person p1;

// // with typedef

// // typedef struct {
// //     char name[50];
// //     int age;
// // } Person;

// // Person p1;  // much cleaner!

