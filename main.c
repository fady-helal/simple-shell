#include"main.h"

int main(int argc, char **argv)
{
char *line = NULL, **command;
int status = 0, i;


(void)argc;
while(1){
line = read_line();
if (line == NULL)
{
if(isatty(STDIN_FILENO))
printf("\n");
return(status);
}
command = tokenizer(line);
if(!command)
    continue;

status = _excute(command, argv);

return 0;
}
}