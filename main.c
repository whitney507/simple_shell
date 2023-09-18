#include "shell.h"
/**
 * main - simple_shell main func
 * @zc: number of arguments
 * @args: arguments
 *
 * Return: 0 always (success)
 */
int main(int zc, char **args)
{
char *line = NULL;
char **cmd = NULL;
int status = 0, id = 0;
(void)zc;
while (1)
{
line = read_line();

if (line == NULL)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (status);
}
id++;
cmd = tokenize(line);
if (!cmd)
{
continue;
}
status = _exec(cmd, args, id);
}
}
