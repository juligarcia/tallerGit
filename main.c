#include <stdio.h>

#define HELLO_WORLD "Hello world!"

int resta(int, int);

int main(){
	printf("%d\n", resta(-2,1));
	return 0;
}

int resta(int a, int b){
	return a-b;
}
