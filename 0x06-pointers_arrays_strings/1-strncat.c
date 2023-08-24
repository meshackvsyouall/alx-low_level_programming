#include "main.h"

/**
 * _strncat -concatenates two strings using at most n bytes
 * @dest: the destination string to append to 
 * @src: the source string to append from
 * @n: at most number of bytes to be taken from @src
 *
 * Return: a pointer tothe resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
  char *original_dest = dest;

  while (*dest)
    dest++;

  while (*src && n > 0)
    {
      *dest = *src;
      dest++;
      src++;
      n--;
    }
  *dest = '\0';

  return original_dest;
}
