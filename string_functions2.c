#include "shell.h"

/**
 * _strcpy - Copies the content of one string to another.
 * @dest: The destination where the string will be copied.
 * @src: The source string to be copied.
 * Return: A pointer to the destination string 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 * Return: A pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 * _puts - Displays or prints the content of a string to the standard output.
 * @str: The string to be displayed.
 *
 * Return: No specific return value (void).
 *         Prints the content of the string 'str' to the standard output.
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - Prints a single character to the standard output (stdout).
 * @c: The character to be printed.
 * Return: Returns 1 on success.
 *         If an error occurs, it returns -1, and errno is set accordingly.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}




