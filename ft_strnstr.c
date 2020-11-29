/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:08:12 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/28 17:23:56 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t i;
	size_t j;

	if (!*to_find)
		return ((char*)src);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		j = 0;
		while (to_find[j] && src[i + j] == to_find[j] && i + j < n)
			j++;

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
	char *y;
	
	str = "hfhsfhstestee";
	x = ft_strnstr(str, tofind, 8);
	printf("%s\n", x);
	return(0);
}
