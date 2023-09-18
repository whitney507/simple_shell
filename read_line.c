#include "shell.h"
/**
 * read_line - gets next line of input from STDIN
 *
 * Return: s
 */
char *read_line(void)
{
char *line = NULL;
size_t len = 0;
ssize_t ne;
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);
ne = getline(&line, &len, stdin);
if (ne == -1)
{
free(line);
return (NULL);
}
return (line);
}
