#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("name: ");
    string name = get_string();
    printf("hello, %s\n", name);
}
