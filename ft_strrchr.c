char* ft_strrchr(char *str, char c)
{
    int i;
    int x;

    i = 0;
    x = 0;
    while (str[i] =! '\0')
    {
        if (str[i] == c)
            x = i;
    }
    if (x = 0)
        return (0);
    return(&str[x]);
}