#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Null if not successful
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *ptr, *s3;

	ptr = s1;

	if (s1)
		while (*ptr++)
			len1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			len2++;

	else
		s2 = "";
	s3 = malloc(len1 + len2 + 1);
	if (!s3)
		return (NULL);
	ptr = s3;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (s3);
}
