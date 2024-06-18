#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a=get_float("a: ");
    int b=get_float("b: ");

    float c=(float)a/(float)b;
    printf("%.69f\n", c);
}
