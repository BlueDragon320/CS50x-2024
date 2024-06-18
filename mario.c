#include <cs50.h>
#include <stdio.h>

int main(void)
// {
//     for(int i=0; i<4; i++)
//     {
//         printf("?\n");
//     }
//     printf("\n");
// }

{
    int vo=get_int("Size Vertical: ");
    int ho=get_int("Size Horizontal: ");
    while (vo<1)
    {
        vo=get_int("Size Vertical: ");
    }
        while (ho<1)
    {
        ho=get_int("Size Horizontal: ");
    }
    for (int v=0; v<vo; v++)
    {
        for (int h=0; h<ho; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
