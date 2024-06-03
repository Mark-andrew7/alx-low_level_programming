#include "main.h"
#include <stdlib.h>
/**
 * count_words - Count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0, in_word = 0;
while (*str)
{
if (*str != ' ' && !in_word)
{
in_word = 1;
count++;
}
else if (*str == ' ' && in_word)
{
in_word = 0;
}
str++;
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words),
 * or NULL if str == NULL or str == "" or on failure.
 */
char **strtow(char *str)
{
char **words;
char *word_start;
int i = 0, word_len, word_count;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (*str)
{
if (*str != ' ')
{
word_start = str;
word_len = 0;
while (*str != ' ' && *str)
{
word_len++;
str++;
}
words[i] = malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
free(words[i--]);
free(words);
return (NULL);
}
for (int j = 0; j < word_len; j++)
words[i][j] = word_start[j];
words[i][word_len] = '\0';
i++;
}
else
{
str++;
}
}
words[i] = NULL;
return (words);
}
