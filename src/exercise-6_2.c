#include <stdio.h>

int main() {

    int a, b, c, d; // integers, a, b, c and d, are defined

    printf ("Input three numbers:\n");
    scanf ("%d, %d, %d, &a, &b, &c");

    printf ("Input = (%d, %d, %d)\n", a, b, c); // prints the user input

    d = a + b + c; // sum of user inputted integers

    printf ("Sum of the two numbers = (%d)\n", d); // prints sum
    
    return 0;

}