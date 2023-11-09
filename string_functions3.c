#include "shell.h"

/**
 **_strncpy - Function that duplicates a string
 *@dest: The string where the content will be copied
 *@src: The original string to copy from
 *@n: The number of characters to duplicate
 *Return: The resulting string after the operation
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - Function that appends part of one string to another
 *@dest: The initial string to which content will be added
 *@src: The string supplying the content to be added
 *@n: The maximum number of bytes to be appended
 *Return: The combined string after the operation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - Function that finds the first occurrence of a character in a
 *           string
 *@s: The string to search within
 *@c: The character to find
 *Return: A pointer to the first occurrence of the character 'c' within
 *        the string 's', or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
