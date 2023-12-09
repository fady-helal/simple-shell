#include"main.h"

char *_strdup(const char *str)
{
int i, length;
char *ptr;
for(length = 0 ; str[length] != '\0' ; length++);
ptr = malloc(sizeof(char) * (length + 1));
if(ptr == NULL)
    return(NULL);
for (i = 0 ; i <= length ; i++)
{
ptr[i] = str[i];
}
return(ptr);
}


int _strcmp(char *s1, char *s2)
{
int i, n;
n = 0;
for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
    {
        if (s1[i] == s2[i])
			continue;
		else
		{
			n = s1[i] - s2[i];
			break;
		}
		}
    return (n);
}

char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0 ; dest[i] != 0 ; i++);
for (j = 0 ; src[j] != 0 ; j++)
dest[i++] = src[j];
dest[i] = '\0';
return (dest);
}

char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
    len++;
}
for (i = 0 ; i <= len ; i++)
{
	dest[i] = src[i];
}
return (dest);
}

int _strlen(char *str)
{
int length;
for(length = 0 ; str[length] != '\0' ; length++);
return (length);
}

