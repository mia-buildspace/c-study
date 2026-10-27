#include <stdio.h>

int main(void)
{
    // Exercise 1: Variables
    int age = 24;
    printf("Age: %d\n", age);

    // Exercise 2: Signed and unsigned
    signed char temperature = -2;
    unsigned char personAge = 52;

    printf("Temperature: %d\n", temperature);
    printf("Age: %u\n", (unsigned int)personAge);

    // Exercise 3: Floating-point types
    float height = 165.5f;
    double pi = 3.141592653589793;

    printf("Height: %f\n", (double)height);
    printf("Pi: %.15f\n", pi);

    // Exercise 4: Character constants
    char key = 'A';

    printf("Character: %c\n", key);
    printf("ASCII value: %d\n", key);

    return 0;
}
