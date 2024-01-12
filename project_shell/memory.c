#include "shell.h"

/**
 * bfree - Frees a pointer and sets its address to NULL
 * @ptr: Address of the pointer to free
 *
 * This function frees the memory allocated for a pointer and sets the
 * pointer's address to NULL to avoid dangling pointers.
 *
 * Return: 1 if the pointer was freed, 0 otherwise.
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

