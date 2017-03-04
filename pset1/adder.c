#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("x is ");
    int x = get_int();
    
    printf("y is ");
    int y = get_int();
    
    printf("x and y is %i\n", x + y);
    
    printf("z is ");
    int z = get_int();
    
    printf("h is ");
    int h = get_int();
    
    printf("%i plus %i is %i\n", z, h, z + h);

}