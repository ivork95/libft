char* ft_memset(char *str, unsigned char c, unsigned int n)
{
    int i;

    i = 0;
    while (str[i] =! '\0')
    {
        if (n =! 0)
            str[i] = c;
        i++;
        n--;
    }
    return (str);
}

void ft_bzero(char *str, unsigned int n)
{
    ft_memset(str, '0', n);
}