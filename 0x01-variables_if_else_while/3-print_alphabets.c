#include <stdio.h>
/**
 * main - A program that prints a line using the printf function
 * Return: 0 (Success)
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
/*prints a - z*/
while (ch <= 'z')
{
putchar (ch);
ch++;
}
/*print A - Z*/
while (CH <= 'Z')
{
putchar (CH);
CH++;
}
putchar('\n');
return (0);
}
