#include "main.h"

/**
 * *_strcpy - idek
 * @dest: Idk
 * @src: Idk either
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int fish;

	for (fish = 0; src[fish] != 0; fish++)
	{
		dest[fish] = src[fish];
	}
	dest[fish] = 0;

	return (dest);
}
