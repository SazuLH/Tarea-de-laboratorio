#include <stdio.h>

int main()
{
      char name[20];
      printf("What's your name?");
      scanf("%s", name);
       if (name == ""){
		   printf ("error");
	   }	  
	   else{
		   printf("Hello %s", name);
	   }
	   return 0;
	
	
}