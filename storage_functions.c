#include "shell.h"

/**
 * _memset - Function that populates a memory block with a specific byte value
 * @s: Pointer to the memory area to be filled
 * @b: The byte value used to fill the memory
 * @n: The number of bytes to be set with the byte value
 * Return: A pointer to the memory area 's' after filling
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - Releases memory occupied by an array of strings
 * @pp: Pointer to an array containing strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - Modifies the size of a previously allocated memory block
 * @ptr: Pointer to a previously allocated memory block
 * @old_size: The size in bytes of the previous memory block
 * @new_size: The new size in bytes for the memory block
 * Return: A pointer to the adjusted memory block,
 *         or the old block if reallocation fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

/**
 * bfree - Deallocates memory from a pointer and sets the address to NULL
 * @ptr: Address of the pointer to be deallocated
 * Return: Returns 1 if memory is successfully deallocated, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

