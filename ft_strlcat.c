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

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dest);
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
	dest[i] = '\0';
	if (dstlen > n)
		return (ft_strlen(src) + n);
	return (ft_strlen(dest) + ft_strlen(src));
}

// int	main()
// {
// 	char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char *d1 = "there is no stars in the sky";
// 	char *d2 = "there is no stars in the sky";
// 	unsigned long x;
// 	unsigned long y;

// 	x = ft_strlcat(d1, s1, 22);
// 	y = strlcat(d2, s1, 22);
// 	printf("strlcat = %lu\n", y);
// 	printf("strlcat = %s\n",)
// 	printf("ft_ = %lu\n", x);
// 	return (0);
// }