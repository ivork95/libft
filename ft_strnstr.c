/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:08:12 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/23 13:30:56 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t i;
	size_t j;

	if (!to_find)
		return ((char*)src);
	i = 0;
	while (src[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == src[i + j] && i + j < n)
			j++;
		if (to_find[j] == '\0')
			return ((char*)&src[i]);
		i++;
	}
	return (0);
}
