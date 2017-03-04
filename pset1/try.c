#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("Hi, ");
  float f;

  do
   {
       printf("How much change is owed?\n");
       f = get_float();
   }
   while (f < 0.00);
   
   
   int i = round (.50f) * 100;
   int total;
   int sub; 
   
   while (i / 25 >= 0)
    {
     total = i / 25;
     sub = i % 25;
    }
    
    printf("%i\n", total, sub);
    
}