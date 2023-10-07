#include "main.h"
#include <stdlib.h>




/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Description:
 * This function concatenates the first string @s1 with the first @n bytes
 * of the second string @s2 and ensures that the result is null-terminated.
 * If @n is greater than or equal to the length of @s2, the entire @s2 is used.
 * If either @s1 or @s2 is NULL, they are treated as empty strings.
 *
 * Return:
 * - On success, a pointer to a newly allocated memory space containing
 *   the concatenated string is returned.
 *-If memory allocation fails or if @s1and@s2 are both NULL, NULL is returned.
 *
 * Note:
 * The caller is responsible for freeing the memory allocated by this function
 * using free() when it is no longer needed to avoid memory leaks.
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, w = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[z])
		z++;

	if (n >= z)
		w = x + z;
	else
		w = x + n;

	str = malloc(sizeof(char) * w + 1);
	if (str == NULL)
	return (NULL);

	z = 0;
	while (y < w)
	{
		if (y <= x)
			str[y] = s1[y];

		if (y >= x)
		{
			str[y] = s2[z];
			z++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
