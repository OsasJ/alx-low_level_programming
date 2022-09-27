#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - seraches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing thebytes to look for
 *
 * Return: pointer to the bytes in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
