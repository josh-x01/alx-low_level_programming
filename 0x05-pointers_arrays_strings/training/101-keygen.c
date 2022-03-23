#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
    char c;
    
	srand(time(NULL));
    c = rand() % 128;
    putchar(c);
    putchar('\n');
	return (0);
}
