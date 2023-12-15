#include"main.h"
void free_array(char **array)
{
int i;
if(!array)
{
    return;
}
for (i = 0 ; array[i]; i++)
{
    free(array[i]);
    array[i] = NULL;
}
free (array);
array = NULL;
}

void printerror(char *name, char *cmd, int idx)
{
    char *index, mssg[] = ": not found\n";
    index = _atoi(idx);
    write(STDERR_FILENO, name, _strlen(name));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, index, _strlen(index));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, cmd, _strlen(cmd));
    write(STDERR_FILENO, mssg, _strlen(mssg));
    free(index);
}

char *_atoi(int n)
{
char buf[20];
int i = 0;
if (n == 0)
    buf[i++] = '0';
else
{
    while(n > 0)
    {
        buf[i++] = (n % 10) + '0';
        n /= 10;
    }
}
buf[i] = '\0';
reverse_string(buf, i);
return(_strdup(buf));
}

void reverse_string(char *str, int len)
{
char temp;
int start = 0;
int end = len - 1;
while(start < end)
{
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
}


}

