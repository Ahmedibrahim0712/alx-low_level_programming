#include <stdio.h>

#define LARGEST 10000000000

int main(void)
{
    unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
    unsigned long int hold1, hold2, hold3;
    int count;

    /* Print the first two Fibonacci numbers */
    printf("%lu, %lu, ", bk1, bk2);

    for (count = 2; count < 98; count++)
    {
        if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
        {
            /* Handle overflow */
            hold1 = (bk1 + bk2) / LARGEST;
            hold2 = (bk1 + bk2) % LARGEST;
            hold3 = fr1 + fr2 + hold1;
            fr1 = fr2, fr2 = hold3;
            bk1 = bk2, bk2 = hold2;

            /* Print the combined Fibonacci number */
            printf("%lu%010lu", fr2, bk2);
        }
        else
        {
            /* No overflow, calculate and print the next Fibonacci number */
            hold2 = bk1 + bk2;
            bk1 = bk2, bk2 = hold2;

            /* Print the next Fibonacci number */
            printf("%lu", bk2);
        }

        if (count != 97)
            printf(", ");
    }

    /* End with a newline character */
    printf("\n");

    return (0);
}
