#include "main.h"
/**
 * create_array - array for printsa string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
        char *buffer;
        unsigned int position;

        if (size == 0)
        {
                return (NULL);
        }

        /*Define value with malloc*/
        buffer = (char *) malloc(size * sizeof(c));

        if (buffer == 0)
        {
                return (NULL);
        }
        else
        {
                position = 0;
                while (position < size) /*IWhile for array*/
                {
                        *(buffer + position) = c;
                        position++;
                }

                return (buffer);
        }
}
