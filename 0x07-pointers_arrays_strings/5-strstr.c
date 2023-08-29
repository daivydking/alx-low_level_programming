#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: all string
 * @needle: substring
 *
 * Return: to the beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}

		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}

	return (0);
}
