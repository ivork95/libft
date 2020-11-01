/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 15:14:54 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/01 16:01:40 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return (&dest[i + 1]);
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (0);
}