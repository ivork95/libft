int ft_tolower(char *str)
{
    int i;

    i = 0;
    while (str[i] =! '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
}