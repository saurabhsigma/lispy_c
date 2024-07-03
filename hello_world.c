#include <stdio.h>
#include <math.h>

int add_together(int x, int y){
	int result = x + y;
	return result;
}

typedef struct{
	float x;
	float y;
} Point;


	
int main(int argc, char** argv){
	printf("Hello, World!, my name is Saurabh Singh\n");
// 	return 0;
	int added = add_together(10,5);
	printf("The sum of the two given number is : %d\n" , added);
	
	Point p1;
	p1.x = 0.1;
	p1.y = 10.0;
	
	float length = sqrt(p1.x * p1.x + p1.y * p1.y);
	
	printf("The distance of the point from the origin will be: %f\n", length);	
	


	
	// // conditionals
// 	int x = 3729;
// 	if (x>10 && x<100){
// 		puts("x is greater than 10 and less than 100!");
// 	}else {
// 		puts("x is less than 11 or greater than 100!");
// 	}
// 	
// 	// 	loops
// 	int i = 10;
// 	while (i>0){
// 		puts("Loop Iteration");
// 		i = i - 1;
// 	}
// 	
// 	for (int i =0; i<10; i++){
// 		puts("Loop iteration");
// 	}

	return 0;
}


