#include "shell.h"
/**
* _memset - fill memory with const byte
* @st: pointer to memory area
* @bt: byte to fill *s with
* @nt: amount of bytes to fill
* Return: (s) pointer to memory area s
*/
char *_memset(char *st, char bt, unsigned int nt)
{
unsigned int z;
for (z = 0; z < nt; z++)
st[z] = bt;
return (st);
}
/**
 * ffree - free string of strings
 * @ppt: string of strings
 */
void ffree(char **ppt)
{
char **a = ppt;
if (!ppt)
return;
while (*ppt)
free(*ppt++);
free(a);
}
/**
 * _realloc - realloc block of memory
 * @ptdr: pointer to prev malloc block
 * @old_sizes: size of prev block (byte)
 * @new_sizes: size of new block (byte)
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptdr, unsigned int old_sizes, unsigned int new_sizes)
{
char *p;
if (!ptdr)
return (malloc(new_sizes));
if (!new_sizes)
return (free(ptdr), NULL);
if (new_sizes == old_sizes)
return (ptdr);
p = malloc(new_sizes);
if (!p)
return (NULL);
old_sizes = old_sizes < new_sizes ? old_sizes : new_sizes;
while (old_sizes--)
p[old_sizes] = ((char *)ptdr)[old_sizes];
free(ptdr);
return (p);
}
