#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated memory
 * @str: a string given by main
 * Return: the pointer or null
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[len] = '\0';
	return (ptr);
}
