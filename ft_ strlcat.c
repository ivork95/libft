char *ft_strlcat(char *dst, char *src, unsigned int n)
{
    unsigned int i;

    i= 0;
    while ((src[i] != '\0') & (i < (n - 1))
    {
        dst[i] = src[i];
        i++;
    }
    if(n =! 0);
        dst[i] = '\0';
    return (dst);
}
