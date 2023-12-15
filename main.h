#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<sys/wait.h>
#include<fcntl.h>

extern char **environ;

char *read_line(void);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char **tokenizer(char *line);
void free_array(char **array);
int _excute(char **command, char **argv, int idx);
char *_getenv(char *variable);
char *_getpath(char *command);


void printerror(char *name, char *cmd, int idx);
char *_atoi(int n);
void reverse_string(char *str, int len);
int is_builtin(char *command);
void handle_builtin(char **command, char **argv, int *status, int idx);
void exit_shell(char **command, int *status);
void print_env(char **command, int *status);


#endif