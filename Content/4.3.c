#include  <stdio.h>

int main()

{
    int i, j, n, k;



    i = 5;

    while (i >= 1)

    {


        k = 1;

        while (k <= 5 - i)

        {
            printf(" ");

            k++;

        }

        j = 1;

        while (j <= 2 * i - 1)

        {
            printf("*");

            j++;

        }

        printf("\n");

        i--;

    }

    return 0;

}