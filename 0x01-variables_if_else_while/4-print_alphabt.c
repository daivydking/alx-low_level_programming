#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Aways 0 (Sucess/correct)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');

return (0);
}
