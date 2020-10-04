// func.c by Bill Weinman <http://bw.org/>
#include <stdio.h>
#include "func.h"

void func() {
	printf("this is in the function\n");
	printf("This is also a void function which means there is no return type \n");
}

int main( int argc, char ** argv ) {
	printf("Hello, World!\n");
	func();
	return 0;
}

