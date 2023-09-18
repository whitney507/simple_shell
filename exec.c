#include "shell.h"

/**
 *_exec - this is the exec function
 *@cmd: command
 *@args: argument
 *@id: identifier
 *Return: s
 */
int _exec(char **cmd, char **args, int id)
{
pid_t child;
int status;
char *full_command;
full_command = _getpath(cmd[0]);
if (!full_command)
{
	printerror(args[0], cmd[0], id);
	freearray2d(cmd);
	return (127);
}
child = fork();
if (child == 0)
{
	if (execve(full_command, cmd, environ) == -1)
	{
		free(full_command), full_command = NULL;
		freearray2d(cmd);
	}
}
else
{
	waitpid(child, &status, 0);
	freearray2d(cmd);
	free(full_command), full_command = NULL;
}

return (WEXITSTATUS(status));
}
