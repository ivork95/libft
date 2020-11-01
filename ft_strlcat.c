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

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	while (i < (n - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n != 0)
		dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
