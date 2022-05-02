#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @str1: string 1
 * @str2: string 2
 *
 * Return: char type
 */
char *str_concat(char *str1, char *str2)
{
	unsigned int i, j, k, l;
	char *p;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	for (i = 0; str1[i] != '\0'; i++)
		;
	for (j = 0; str2[j] != '\0'; j++)
		;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
		free(p);
	}
	for (k = 0; k < i; k++)
		p[k] = str1[k];
	for (l = 0; l <= j; k++, l++)
		p[k] = str2[l];
	return (p);
	free(p);
}
