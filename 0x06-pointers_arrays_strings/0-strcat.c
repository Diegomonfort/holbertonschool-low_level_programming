#include "main.h"
/**
*_strcat -concatenate two strings
*@dest: char 1
*@src: char 2
*Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (0);
}
