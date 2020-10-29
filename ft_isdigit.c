int ft_isdigit(char *str)
{
    int i;

    i = 0;
    while (str[i] =! '\0')
    {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}