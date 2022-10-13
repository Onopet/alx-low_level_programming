#include <stdio.h>

/**
 * main - Prints the size of many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %d byte(s)\n", sizeof(a));
pinttf("Size of an int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %byte(s)\n", sizeof(c));
printf("Size of a long long int: 5byte(s)\n", sizeof(d));
printf("size of a float: %byte(s)\n", sizeof(e));
return (0);
}
