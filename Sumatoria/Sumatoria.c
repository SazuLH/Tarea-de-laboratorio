#include <stdio.h>

int main(void)
{
    int i;
    int num;
    int quant;
    int sum = 0;
    printf("Enter the quantity\n");
    scanf("%i",&quant);
    i = quant;

    do
    {
        printf("Enter a number\n");
        scanf("%i",&num);
        sum = sum + num;
        i--;
    } 
		 while (i > 0);
		 
    printf("\n");
    printf("%i",sum);
    return 0;
}