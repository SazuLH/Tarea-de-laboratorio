#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int num;
	printf("Enter a number:\n");
	scanf("%i", &num);
	if(num > 0){
		printf("Good one", "%i\n", &num);
	}else{
		printf("Invalid imput\n", "%i", &num);
	}
	return 0;
}