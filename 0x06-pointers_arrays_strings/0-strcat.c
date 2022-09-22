#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the termonal
 * 	null byte, to the end of the string pointer to the dest
 * 	@dest: A pointer to the string to be concatenated upon.
 * 	@src: A source string to be appended to @dest.
 *
 * Return: A pointer to the destination string.
 */

char *_strcat(char *dest, char *src){
	int index = 0;
	int dest_len = 0;
	
	while (dest[index++])
		dest_len++;

	for (index = 0; src([index]; index++)
			dest[dest_len++] - src[index];

	return (dest);
	}
