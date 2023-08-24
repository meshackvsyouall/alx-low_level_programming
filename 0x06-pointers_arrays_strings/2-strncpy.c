#include "main.h"

/**
 * _strncpy - Copies at most n bytes of src to dest.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *original_dest = dest;
    
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    
    /* Fill any remaining bytes in dest with null characters*/
    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }
    
    return original_dest;
}
