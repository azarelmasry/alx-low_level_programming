#include <stdio.h>
/**
 * main - A program that prints a line using the printf function
 * Return: 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar (digit + 48);
if (digit != 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar ('\n');
return (0);
}
