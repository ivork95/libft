/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 13:51:26 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/04 17:31:28 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	char		*lastd;
	const char	*lasts;
	const char	*s;

	d = dest;
	s = src;
	i = n;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (i > 0)
		{
			*d[i] = *s;
		}
	}
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
