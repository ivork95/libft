#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char 	*newstr;
	size_t 	len_s1;
	size_t 	len_s2;
	size_t 	i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	newstr = (char*)malloc(len_s1 + len_s2 + 1);
	i = 0;
	if (newstr == NULL)
		return(NULL);
	while (*s1++)
	{
		newstr[i] = *s1;
		i++;
	}
	while (*s2++)
	{
		newstr[i] = *s2;
		i++;
	}
	newstr[i] = '\0';
	return(newstr);
}