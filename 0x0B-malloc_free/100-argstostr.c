#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: argument count.
 * @av: pointer to array of size ac.
 * Return: NULL if ac == 0 or av == null, Pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	int i, n, k = 0, frw = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			frw++;
	}
	frw += ac;

	str = malloc(sizeof(char) * frw + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)

	{

		for (n = 0; av[i][n]; n++)

		{

			str[k] = av[i][n];

			k++;

		}

		if (str[k] == '\0')

		{

			str[k++] = '\n';
		}
	}
	return (str);
}
