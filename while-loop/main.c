#include <stdio.h>

int main() 
{
    int i = 0, j;

    while (i < 5) 
    {
        j = 0;
        /*nested while loop*/
        while(j < 3) 
        {
            printf("2 ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}