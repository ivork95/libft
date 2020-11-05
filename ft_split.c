#include "libft.h"

size_t ft_count_words(char const *s, char c)
{
	size_t i;
	size_t words;

	i = 0 ;
	words = 0;
	while(s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				words = words + 1;
			break ;
		}
		i++;
	}
	words += 1;
	return (words);
}

char **ft_fill_in(char **array, const char *s, char c);
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (TRUE)
	{
		while (*s == c)
			s++;
		while (s[i] != c)
			i++;
		*arr = (char*)malloc(sizeof(char) * i + 1);
		if (*arr == NULL)
			return (0);
		while (i > 0)
		{
			*arr[j] == *s
			s++;
			j++;
		}
		*arr[j] = '\0';
		*arr++;
		i = 0;
		j = 0;
	}
}

char **ft_split(char const *s, char c)
{
	int i;
	int words;
	char **arr;

	words = ft_count_words(s, c);
	arr = (char*)malloc(sizeof(char*) * words + 1);
	if (arr == NULL)
		return (NULL);
	arr[words] = NULL;
	i = 0;
	ft_fill_in(arr, s, c);
}

int main ()
{
	char* str = "     Hello    rr   World!      ";
	size_t x;

	x = ft_count_words(str, ' ');
	printf("there are %lu words in str\n", x);
	return (0);
}