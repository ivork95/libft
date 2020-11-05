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

char **ft_split(char const *s, char c)
{
	int i;
	int words;
	char **arr;

	words = ft_count_words(s, c);
	*arr = (char*)malloc(sizeof(char*) * words + 1);
	if (arr == NULL)
		return (NULL);
	*arr[words] = NULL;
	
	i = 0;
	while(s)
	{
		while(s[i] != c)
		{
			memccpy ()
			i++;
		}

	}
}

int main ()
{
	char* str = "     Hello    rr   World!      ";
	size_t x;

	x = ft_count_words(str, ' ');
	printf("there are %lu words in str\n", x);
	return (0);
}