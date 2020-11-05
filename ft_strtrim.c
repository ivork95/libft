#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	const char *trim;
	char *newstr;
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s1);
	newstr = (char*)malloc(len - ft_strlen(set));
	if (newstr == NULL)
		return (NULL);
	trim = ft_strnstr(s1, set, len);
	while (&s1[i] != &trim[0])
		i++;
	ft_strlcpy(newstr, s1, i);
	newstr[i] = '\0';
	i += dt_strlen(set);
	ft_strlcat(newstr, s1[i], len - i);
	return (newstr);
}
