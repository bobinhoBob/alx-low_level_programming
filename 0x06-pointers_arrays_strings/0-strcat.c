#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the termonal
 *null byte, to the end of the string pointer to the dest
 *@dest: A pointer to the string to be concatenated upon.
 *@src: A source string to be appended to @dest.
 *
 * Return: returns pointer to @dest.
 */

char *_strcat(char *dest, const char *src)
{

	int c,c2;
	c = 0;
	while (dest[c])
		c++;
	/* iterate through each src array value `];
thout the null byte*/
	for (c2 = 0; src[c2]; c2++)
		/* append scr[c2] to dest[c] while overwritting the null byte in dest*/
	dest[c++] = src[c2];

	return (dest);
}
