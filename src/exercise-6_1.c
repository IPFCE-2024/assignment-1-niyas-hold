#include <stdio.h>

int main() {

    int a, b, c; // integers, a and b, are defined

    printf ("Input two numbers:\n");
    scanf ("%d, %d, &a, &b");

    printf ("Input = (%d, %d)\n", a, b); // prints the user input

    c = a + b; // sum of user inputted integers

    printf ("Sum of the two numbers = (%d)\n", a); // prints sum
    
    return 0;
    
}
