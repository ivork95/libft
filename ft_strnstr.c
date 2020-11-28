/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:08:12 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/27 21:19:20 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t i;
	size_t j;

	if (!*src)
		return (NULL);
	if (!*to_find)
		return ((char*)src);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		printf("i = %ld\n", i);
		j = 0;
		printf("src = %c\n", src[i + j]);
		printf("to find = %c\n", to_find[j]);
		while (src[i + j] == to_find[j] && i + j < n)
		{
			printf("///\nj = %ld\n", j);
			printf("%c\n", to_find[j]);
			printf("%c\n", src[i + j]);
			j++;
			printf("///\nj = %ld\n", j);
		}
		if (to_find[j] == '\0')
			return ((char*)&src[i]);
		i++;
	}
	return (0);
}

int main()
{
	const char *str;
	const char *tofind = "test";
	char *x;
	
	str = "hghtesteee";
	x = ft_strnstr(str, tofind, 4);
	printf("%s\n", x);
	return(0);
}
