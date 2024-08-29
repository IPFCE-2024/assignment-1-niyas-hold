// program to calculate highest possible sum of two of three integers

#include <stdio.h>

int main() {

    int a, b, c, d;

    printf ("Input three numbers:\n"); // prompts for three numbers
    scanf ("%d, %d, %d", &a, &b, &c);

    if (a > b) // if a is larger than b run the following code
    {
        if (b > c) // checks to see if b is larger than c
        {
            d = a + b; // calculates sum of a and b
        }

        else
        {
            d = a + c; // calculates sum of a and c
        }
    }

    else // if previous if statement(s) are not true; run the following code
        {
        if (a > c) //checks to see if a is larger than c
        {
            d = b + a; // calculates sum of b and a
        }

        else
        {
            d = b + c; // calculates sum of b and c
        }
    }

    printf ("The highest possible sum of two of the three numbers is: %d", d); // prints the highest possible sum
    
    return 0;
}