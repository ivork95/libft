/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ strlcat.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 15:46:43 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 15:46:43 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (n - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n != 0)
		dest[i] = '\0';
	return (strlen(dest) + strlen(src));
}

int	main()
{
	char *s1 = "Hello World!";
	char *d1 = "ADD TO";
	char *d2 = "ADD TO";
	unsigned long x;
	unsigned long y;

	x = ft_strlcat(d1, s1, 6);
	y = strlcat(d2, s1, 6);
	printf("strlcat = %lu\n", y);
	printf("ft_ = %lu\n", x);
	return (0);
}