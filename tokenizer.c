#include"main.h"
char **tokenizer(char *line)
{
char *token = NULL, *dup_line = NULL, **argv = NULL;
char *delim = " \t\n";
int count = 0, i = 0;
if(!line)
    return(NULL);
dup_line = _strdup(line);
token = strtok(dup_line, delim);
if(token == NULL)
{
    free(dup_line), dup_line = NULL;
    free(line),line = NULL;
    return(NULL);
}
while(token)
{
    count++;
    token = strtok(NULL, delim);
}
free(dup_line), dup_line = NULL;
argv = malloc(sizeof(char *) * (count + 1));
if(!argv)
{
    free(line), line = NULL;
    return(NULL);
}
token = strtok(line, delim);
while(token)
{
    argv[i] = _strdup(token);
    token = strtok(NULL, delim);
    i++;
}
free(line), line = NULL;
argv[i] = NULL;
return (argv);
}
