#include <stdio.h>

int main() {

    int a, b, c, d, e; // integers, a, b, c, d and e, are defined

    printf ("Input three numbers:\n");
    scanf ("%d, %d, %d, %d, &a, &b, &c, &d");

    printf ("Input = (%d, %d, %d)\n", a, b, c, d); // prints the user input

    e = a + b + c + d; // sum of user inputted integers

    printf ("Sum of the four numbers = (%d)\n", e); // prints sum
    
    return 0;

}