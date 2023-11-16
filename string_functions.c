#include "shell.h"

/**
 * _strlen - calculates the number of characters in a string
 * @s: the string for which the number of characters is counted
 * Return: the total count of characters in the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - Compares two strings in a lexicographical order.
 * @s1: The first string for comparison
 * @s2: The second string for comparison
 * Return: Negative value if s1 comes before s2 in the dictionary,
 *         positive value if s1 comes after s2,
 *         and zero if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if the 'needle' string is found
 *               at the start of the 'haystack' string.
 * @haystack: The string in which the search is performed.
 * @needle: The substring that is being sought at the beginning of 'haystack'.
 * Return: If 'needle' is found at the beginning of 'haystack',
 *         the function returns the address of the character in 'haystack'
 *         following the 'needle'. If 'needle' is not found at the beginning
 *         of 'haystack', the function returns NULL.
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Concatenates the content of two strings.
 * @dest: The destination buffer where the strings will be combined.
 * @src: The source buffer containing additional content to be added to 'dest'.
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}


