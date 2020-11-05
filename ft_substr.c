#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	newstr = (char*)malloc(sizeof(char*) * len + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		newstr[i] = s[start];
		i++;
		start++; 
	}
	newstr[i] = '\0';
	return (newstr);
}