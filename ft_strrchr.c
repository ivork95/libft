/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 16:23:33 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 16:23:33 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x = i;
	}
	if (x == 0)
		return (0);
	return ((char*)&s[x]);
}
