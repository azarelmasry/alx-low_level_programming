#include <stdio.h>
/**
 * main - A program that prints a line using the printf function
 * Return: 0 (Success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar (ch);
ch--;
}
putchar('\n');
return (0);
}
