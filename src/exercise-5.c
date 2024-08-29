#include <stdio.h>

int main (void) {

    int a, b;

    printf("Input two numbers:\n"); // User is prompted to enter two numbers
    scanf("%d, %d", &a, &b);

    if(a > b) // Run the following code if a is larger than b
    {
    printf("%d is maximum", a);
    }

    if(b > a) // Run the following code if b is larger than a
    {
    printf("%d is maximum", b);
    }

    if(a == b) // Run the following code if a is equal to b
    {
    printf("%d and %d are equal", a, b);
    }

    return 0;

}