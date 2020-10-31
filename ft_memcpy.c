/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 13:44:22 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 13:44:22 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n) 
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char*)dest;
	s = (const char*)src;
	if (!dest && ! src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
