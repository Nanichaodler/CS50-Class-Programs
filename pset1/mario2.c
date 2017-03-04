#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("height: ");
    int n = get_int();
    
    for (int j = 0; j < n; j++)
     {
       for(int i = n; i > j + 1; i--)
         {
           printf(" ");
         }
      printf("#");
      for(int h = 0; h < j + 1; h++)
         {
           printf("#");
         }
        printf("\n");
     }
    printf("\n");
}

