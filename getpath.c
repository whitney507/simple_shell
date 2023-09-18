#include "shell.h"
/**
 * _getpath - finds cmd in the PATH string
 * @cmd: the cmd to find
 *
 * Return: full path of cmd if found or NULL
 */
char *_getpath(char *cmd)
{
struct stat st;
char *path, *full_cm, *direct;
int z;
for (z = 0; cmd[z]; z++)
{
if (cmd[z] == '/')
{
if (stat(cmd, &st) == 0)
return (strdup(cmd));
return (NULL);
}
}
path = _getenv("PATH");
if (!path)
return (NULL);
direct = strtok(path, ":");
while (direct)
{
full_cm = malloc(_strlen(direct) + _strlen(cmd) + 2);
if (full_cm)
{
_strcpy(full_cm, direct);
_strcat(full_cm, "/");
_strcat(full_cm, cmd);
if (stat(full_cm, &st) == 0)
{
free(path);
return (full_cm);
}
free(full_cm), full_cm = NULL;
direct = strtok(NULL, ":");
}
}
free(path);
return (NULL);
}
