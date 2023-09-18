#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#define DELIM " \t\n"
extern char **environ;
char *read_line(void);
char **tokenize(char *line);
int _exec(char **cmd, char **args, int id);
void freearray2d(char **ar);
char *_getenv(char *var);
char *_getpath(char *cmd);
void printerror(char *names, char *cmd, int id);
char *_strdup(const char *stri);
int _strcmp(char *z1, char *z2);
int _strlen(char *z);
char *_strcat(char *desti, char *srcs);
char *_strcpy(char *desti, char *srcs);
char *_itoa(int q);
void reverse_string(char *stri, int len);
#endif
