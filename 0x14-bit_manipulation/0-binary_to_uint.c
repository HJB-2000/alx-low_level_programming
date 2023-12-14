#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string composed of '0' and '1' characters.
 *
 * Description: This function interprets the input binary string and converts
 *              it into an unsigned integer. If the string is invalid (NULL
 *              or contains characters other than '0' or '1'), the function
 *              returns 0.
 *
 * Return: If the input string is NULL or contains non-'0'/'1' characters,
 *         return 0. Otherwise, return the converted unsigned integer.
 */


unsigned int binary_to_uint(const char *b)
{
    unsigned int n = 0, m = 1;
    int lenght = 0;

    if (b == NULL || *b == '\0')
        return (0);

    while (b[lenght] != '\0')
        lenght++;

    lenght--;

    while (lenght >= 0)
    {
        if (b[lenght] != '0' && b[lenght] != '1')
            return (0);

        n += (b[lenght] - '0') * m;
        m *= 2;
        lenght--;
    }

    return (n);
}