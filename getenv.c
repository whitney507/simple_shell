#include "shell.h"
/**
 * _getenv - gets value of environ variable
 * @var: environ var name
 *
 * Return: the value
 */
char *_getenv(char *var)
{
int a;
char *temp, *key, *env, *val;
for (a = 0; environ[a]; a++)
{
temp = _strdup(environ[a]);
key = strtok(temp, "=");
if (_strcmp(key, var) == 0)
{
val = strtok(NULL, "\n");
env = _strdup(val);
free(temp);
return (env);
}
free(temp), temp = NULL;
}
return (NULL);
}
