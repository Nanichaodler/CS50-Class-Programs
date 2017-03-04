#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int n;

   do {
   printf("height: ");
   n = get_int();
   } while(n<0 || n>=24);

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