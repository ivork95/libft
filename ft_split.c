/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:11:29 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/08 21:51:02 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] == c)
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

char	**ft_fill_in(char **array, const char *s, char c, int words)
{
	int i;
	int j;
	int a;
	int count;

	a = 0;
	i = 0;
	while (words)
	{
		count = 0;
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c)
		{
			i++;
			count++;
		}
		*array = (char*)malloc(sizeof(char) * count + 1);
		if (*array == NULL)
			return (0);
		while (count > 0)
		{
			**array = s[j];
			(**array)++;
			j++;
			count--;
		}
		**array = '\0';
		(*array)++;
		words--;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**arr;

	words = ft_count_words(s, c);
	arr = (char**)malloc(sizeof(char*) * words + 1);
	if (arr == NULL)
		return (NULL);
	arr[words] = NULL;
	i = 0;
	return (ft_fill_in(arr, s, c, words));
}
