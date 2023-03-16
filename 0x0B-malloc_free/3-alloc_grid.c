#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **frw;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	frw = malloc(height * sizeof(int *));
	/* if frw is equal to Null return Null*/
	if (frw == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{

		frw[i] = malloc(width * sizeof(int));

		if (frw[i] == NULL)
		{
			while (i >= 0)
				free(frw[i--]);

			free(frw);
			return (NULL);
		}
			/*for every a that is less than width increase a*/
			for (a = 0; a < width; a++)
				frw[i][a] = 0;
	}
	return (frw);
}
