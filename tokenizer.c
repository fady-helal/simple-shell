#include"main.h"
char **tokenizer(char *line)
{
char *token = NULL, *dup_line = NULL, **argv;
char *delim = " \t\n";
int count = 0, i;
if(!line)
    return(NULL);
dup_line = _strdup(line);
token = strtok(dup_line, delim);
if(token == NULL)
{
    free(line);
    free(dup_line);
    return(NULL);
}
while(token != NULL)
{
count++;
token = strtok(NULL, delim);
}
count++;
free(dup_line);
argv = malloc(sizeof(char *) * count);
if (!argv)
{
free(line);
return(NULL);
}
token = strtok(line, delim);
for(i = 0 ; token != NULL; i++)
{
argv[i] = malloc(sizeof(char) * _strlen(token));
_strcpy(argv[i], token);
token = strtok(NULL, delim);
}
argv[i] = NULL;
free(line);
return(argv);
}