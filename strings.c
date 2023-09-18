#include "shell.h"
/**
 * _strdup - duplicates a string
 * @stri: string to duplicate
 *
 * Return: pointer to duplicated string
 */
char *_strdup(const char *stri)
{
char *ptrs;
int a, len = 0;
if (stri == NULL)
return (NULL);
while (*stri != '\0')
{
len++;
stri++;
}
stri = stri - len;
ptrs = malloc(sizeof(char) * (len + 1));
if (ptrs == NULL)
return (NULL);
for (a = 0; a <= len; a++)
ptrs[a] = stri[a];
return (ptrs);
}
/**
 * _strcmp - lexicogarphic comparison of two strings.
 * @z1: first string
 * @z2: second string
 *
 * Return: if z1 < z2 negative, if z1 > z2 positive, if z1 == z2 zero
 */
int _strcmp(char *z1, char *z2)
{
int cm;
cm = (int)*z1 - (int)*z2;
while (*z1)
{
if (*z1 != *z2)
break;
z1++;
z2++;
cm = (int)*z1 - (int)*z2;
}
return (cm);
}
/**
 * _strlen - return length of a string
 * @z: the string whose length needs to be checked
 *
 * Return: integer length of string
 */
int _strlen(char *z)
{
int len = 0;
while (z[len])
{
len++;
}
return (len);
}
/**
 * _strcat - chains two strings
 * @desti: the destination buffer
 * @srcs: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *desti, char *srcs)
{
char *q = desti;
while (*q)
{
q++;
}
while (*srcs)
{
*q = *srcs;
q++;
srcs++;
}
*q = *srcs;
return (desti);
}
/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: the source
 *
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
if (dest == src || src == 0)
return (dest);
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = 0;
return (dest);
}
