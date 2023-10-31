#include "main.h"
#include <stdlib.h>

void split_words(char **, char *);
void extract_word(char **, char *, int, int, int);

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, flag, num_words;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = num_words = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			num_words++;
		}
		i++;
	}

	num_words += flag == 1 ? 1 : 0;
	if (num_words == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	split_words(words, str);
	words[num_words] = NULL;
	return (words);
}

/**
 * split_words - A utility function to fetch words into an array
 * @words: The array of strings
 * @str: The input string
 */
void split_words(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			extract_word(words, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		extract_word(words, str, start, i, j);
}

/**
 * extract_word - Creates a word and inserts it into the array
 * @words: The array of strings
 * @str: The input string
 * @start: The starting index of the word
 * @end: The ending index of the word
 * @index: The index of the array to insert the word
 */
void extract_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
