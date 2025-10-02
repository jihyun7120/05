#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int x;
    int trial=0;
    
    
    
    do
    {
        printf("Guess a number: ");
        scanf("%i", &x);
        
        
        if (x <answer)
           printf("Low!\n");
        else if (x>answer)
             printf("high!\n");
             
        trial = trial+1;
        
        
        
    } while( x != answer); // x==answer°¡ ¾Æ´Ñ x!=answer... 
    
    printf("congratulation! trial: %d", trial);

         
   
    
    
  system("PAUSE");	
  return 0;
}
