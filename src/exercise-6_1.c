#include <stdio.h>

int main() {

    int a, b, c; // integers, a, b and d, are defined

    printf ("Input two numbers:\n");
    scanf ("%d, %d, &a, &b");

    printf ("Input = (%d, %d)\n", a, b); // prints the user input

    c = a + b; // sum of user inputted integers

    printf ("Sum of the two numbers = (%d)\n", c); // prints sum
    
    return 0;

}