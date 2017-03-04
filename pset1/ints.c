#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("z is ");
    int z = get_int();
    
    printf("h is ");
    int h = get_int();
    
    printf("%i plus %i is %i\n", z, h, z + h);
    printf("%i minus %i is %i\n", z, h, z - h);
    printf("%i times %i is %i\n", z, h, z * h);
    printf("%i divided by %i is %i\n", z, h, z / h);
    printf("remainder of %i divided by %i is %i\n", z, h, z % h);
}