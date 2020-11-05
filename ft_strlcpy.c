/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 15:34:10 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 15:34:10 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t srclen;
	unsigned int i;

	i = 0;
	srclen = ft_strlen(src);
	if (n == 0)
	{
		return (srclen);
	}
	while ((src[i] != '\0') && (i < n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (n != 0)
		dest[i] = '\0';
	return (srclen);
}
