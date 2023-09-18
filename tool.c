#include "shell.h"
/**
 * freearray2d - duplicates a string
 * @ar: array of string
 *
 * Return: if no string null
 */
void freearray2d(char **ar)
{
int i;
if (!ar)
return;
for (i = 0; ar[i]; i++)
free(ar[i]), ar[i] = NULL;
free(ar), ar = NULL;
}
/**
 * printerror - prints error message
 * @names: shell name
 * @cmd: command
 * @id: shell index
 *
 * Return: nothing
 */
void printerror(char *names, char *cmd, int id)
{
char *ind, msg[] = ":not found\n";
ind = _itoa(id);
write(STDERR_FILENO, names, _strlen(names));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, ind, _strlen(ind));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cmd, _strlen(cmd));
write(STDERR_FILENO, msg, _strlen(msg));
free(ind);
}
/**
 * _itoa - converter function
 * @q: number to convert
 *
 * Return: string
 */
char *_itoa(int q)
{
char buff[20];
int s = 0;
if (q == 0)
buff[s++] = '0';
else
{
while (q > 0)
{
buff[s++] = (q % 10) + '0';
q /= 10;
}
}
buff[s] = '\0';
reverse_string(buff, s);
return (_strdup(buff));
}
/**
 * reverse_string - it reverses the string
 * @stri: string to reverse
 * @len: lenght
 *
 * Return: string
 */
void reverse_string(char *stri, int len)
{
int start = 0;
char tm;
int end = len - 1;
while (start < end)
{
tm = stri[start];
stri[start] = stri[end];
stri[end] = tm;
start++;
end--;
}
}
