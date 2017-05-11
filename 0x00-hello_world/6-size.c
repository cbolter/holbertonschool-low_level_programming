#include <stdio.h>
/**
 * main - main function - entry point
 *
 * return: 0 (success)
 */

int main(void)
{
        char c;
        int i;
        long l;
        long long ll;;
        float f;

        printf("Size of a char: %lu bytes\n", sizeof(c));
        printf("Size of an int: %lu bytes\n", sizeof(i));
        printf("Size of a long int: %lu bytes\n", sizeof(l));
        printf("Size of a long long int: %lu bytes\n", sizeof(ll));
        printf("Size of a float is: %lu bytes\n", sizeof(f));

        return (0);
}
