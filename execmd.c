#include"main.h"

void execmd(char **argv)
{
char *order = NULL;
char *real_command = NULL;
if (argv)
{
order = argv[0];
real_command = get_location(order);
    if (execve(real_command, argv, NULL) == -1)
        {
            perror("Error:");
        }
}
}