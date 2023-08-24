#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_mapping[256] = {'\0'};

    leet_mapping['a'] = '4';
    leet_mapping['A'] = '4';
    leet_mapping['e'] = '3';
    leet_mapping['E'] = '3';
    leet_mapping['o'] = '0';
    leet_mapping['O'] = '0';
    leet_mapping['t'] = '7';
    leet_mapping['T'] = '7';
    leet_mapping['l'] = '1';
    leet_mapping['L'] = '1';

    while (*ptr)
{
    if (leet_mapping[(unsigned char)*ptr] != '\0')
    {
        *ptr = leet_mapping[(unsigned char)*ptr];
    }
    ptr++;
}


    return str;
}
