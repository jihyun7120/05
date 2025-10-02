#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    int y;
    char op;
    
    printf("Enter the calculation: ");
    scanf("%i%c%i", &x, &op, &y);
    
    if (op == '+')
       printf("=%d\n", x+y);
       
    else if (op == '-')
       printf("=%d\n", x-y);
       
    else if (op == '*')
         printf("=%d\n", x*y);
         
    else if (op == '/')
         printf("=%d\n", x/y);
         
   
    
    
  system("PAUSE");	
  return 0;
}
