/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:08:12 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/18 13:21:22 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_first(const char *src, const char *to_find)
{
	int i;

	i = 0;
	while (src[i] == to_find[i])
	{
		i++;
		if (to_find[i] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *src, const char *to_find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return ((char*)src);
	if (ft_check_first(src, to_find))
		return ((char*)src);
	while ((src[i] != '\0') && (i < n))
	{
		if (src[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char*)&src[i - j]);
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
