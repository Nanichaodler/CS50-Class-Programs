#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
  
   float f;
   int quarter_amount = 0;
   int dime_amount = 0;
   int nickle_amount = 0;
   int cent_amount = 0;
   int total = 0;
   int leftover = 0;
  
  
  
   printf("Hi, ");
   do
    {
        printf("How much change is owed?\n");
        f = get_float();
    }
   while (f < 0.00);
   
   
   cent_amount = (int) round (f * 100);

   quarter_amount = cent_amount / 25;
   leftover = cent_amount % 25;
   
   dime_amount = leftover / 10;
   leftover = leftover % 10;

   nickle_amount = leftover / 5;
   leftover = leftover % 5;
   
   total = quarter_amount + dime_amount + nickle_amount + leftover;

   printf("%i\n", total);
}