#include"main.h"

int main(int argc, char **argv)
{
char *line = NULL;
int status = 0, i;

/*char *buf = NULL;
char *buf_copy = NULL;
size_t n = 0;
ssize_t readed;
const char *delim = " \n";
int num_tokens = 0;
char *token;
int i;
*/
(void)argc;
while(1){
line = read_line();
if (line == NULL)
{
if(isatty(STDIN_FILENO))
printf("\n");
return(status);
}
argv = tokenizer(line);
if(!argv)
    continue;
for(i = 0 ; argv[i] ; i++)
printf("%s",argv[i]);


/*buf_copy = malloc(sizeof(char) * readed);
if (buf_copy == NULL)
{
perror("tsh: memory allocation error");
return (-1);
}
strcpy(buf_copy, buf);
token = strtok(buf, delim);
while(token != NULL)
{
num_tokens++;
token = strtok(NULL, delim);
}
num_tokens++;
argv = malloc(sizeof(char *) * num_tokens);

token = strtok(buf_copy, delim);
for (i = 0 ; token != NULL ; i++)
{
argv[i] = malloc(sizeof(char) * strlen(token));
strcpy(argv[i], token);
token = strtok(NULL, delim);
}
argv[i] = NULL;
execmd(argv);

printf("%s\n",buf);

}
free(buf);
free(argv);

free(buf_copy);
*/
return 0;
}
}