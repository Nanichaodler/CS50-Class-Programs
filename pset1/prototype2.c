#include <cs50.h>
#include <stdio.h>

void print_number(int number);

int main(void)
{
   int i = get_int();
   print_number(i);
}

void print_number(int number)
{
    printf("hello, %i\n", number);
}
