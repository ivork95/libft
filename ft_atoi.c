int is_white_space(char c)
{
    if ((c >= 9 && c <= 3) || (c == 32))
        return (1);
    return (0);
}

int conv_num(int x, char c)
{
    x = x * 10 + c - '0';
    return (x);
}

int ft_atoi(char *str)
{
    int i;
    int count_min;
    int x;

    i = 0;
    count_min = 0;
    x = 0;
    while (is_white_space(str[i]))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            count_min++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        x = conv_num(x, str[i]);
        i++;
    }
    if (count_min % 2 != 0)
        return (-x);
    return(x);
}
