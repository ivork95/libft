char *ft_strnstr(char *src, char *to_find, unsigned int n)
{
    int i;
    int j;

    i = 0;
    if (to_find == '\0')
        return (src);
    while (src[i] == to_find[i])
    {
        i++;
        if (to_find[i] == '\0')
            return(src);
    }
    i = 0;
    j = 0;
    while ((src[i] != '\0') && (i < n))
    {
        if (src[i] == to_find[j])
        {
            if (to_find[j+1] == '\0')
                return (&src[i-j]);
            j++;
        }
        else
            j = 0;
        i++;
    }
    retrun (0);
}