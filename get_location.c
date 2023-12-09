#include"main.h"
char *get_location(char *command)
{
char *path;
char *path_copy;
int length_command;
char *token;
int length_token;
char *file_path;
struct stat buffer;
path = getenv("PATH");
if(path){
path_copy = strdup(path);
length_command = strlen(command);
token = strtok(path_copy, ":");
while(token != NULL)
{

length_token = strlen(token);
file_path = malloc(length_token + length_command + 2);
strcpy(file_path, token);
strcat(file_path, "/");
strcat(file_path, command);
strcat(file_path, "\0");
if (stat(file_path, &buffer) == 0)
{
free(path_copy);
return(file_path);
}
else
{
free(file_path);
token = strtok(NULL, ":");
}
}
free(path_copy);
    if (stat(command, &buffer) == 0)
    {
        return (command);
    }
return NULL;
}
return NULL;
}
