#include <stdio.h>
/**
 * main - main function - entry point
 *
 * return: 0 (success)
 */

int main(void)
{
        int i;
        long l;
        long long li;
        char c;
        float f;
        
        printf("Size of a char: %d byte(s)\n", sizeof(c));
        printf("Size of an int: %d byte(s)\n", sizeof(i));
        printf("Size of a long int: %d byte(s)\n", sizeof(l));
        printf("Size of a long long int: %d byte(s)\n", sizeof(li));
        printf("Size of a float is: %d byte(s)\n", sizeof(f));
        return (0);
}
