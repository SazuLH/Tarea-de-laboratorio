#include<stdio.h>

int main(void){
	
	int i;
	int num;
	int quant;
	int elev = 0;
	printf ("Enter a number\n");
	scanf("%i", &quant);
	i = quant;
	
	do{
		if (num != "")
		{
			printf("Enter a number");
			scanf("%i", &num);
			elev = num * num;
			i--;
			printf("%i\n", elev);
			printf("\n");
		}
		
	}while(i > 0);
	return 0;
}