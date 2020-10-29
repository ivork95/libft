#include <stdio.h>

int ft_strlen(char *string)
{
    int i;

    i = 0;
    while (string[i] =! '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    int x;
    char str[] = "Hello World!";
    x = ft_strlen(str);
    printf("len is");
    printf("test");
    return (0);
}