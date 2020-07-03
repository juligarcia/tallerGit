#include <stdio.h>

#define HELLO_WORLD "Hello world!"

int suma(int, int);

int main(){
	printf("%s\n", HELLO_WORLD);
	printf("La suma entre (2+1) da: %d\n", suma(2, 1));
	return 0;
}

int suma(int a, int b){
	return a + b;
}