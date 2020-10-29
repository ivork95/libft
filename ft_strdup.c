#include <stdlib.h>

char *ft_strdup(char *str)
{
    char *target;
    int len;
    int i;

    i = 0;
    if (str == 0)
        return (0);
    len = ft_strlen(str);
    target = malloc(sizeof(*str) * len + 1);
    while (str[i] =! 0)
    {
        target[i] = str[i];
        i++;
    }
    target[i] = '\0';
    return (target);
}
