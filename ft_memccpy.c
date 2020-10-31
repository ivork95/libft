/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 13:45:53 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/31 16:38:14 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;
	int x;

	i = 0;
	d = (char*)dest;
	s = (const char*)src;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x++;
		i++;
	}
	if (x == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dest);
		i++;
	}
	return (dest);
}
