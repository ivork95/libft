int ft_isalnum(char *str)
{
    if (ft_isalpha(str) || ft_isdigit(str))
        return (1);
    else
        return (0);
}