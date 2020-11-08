/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:11:53 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/08 21:21:27 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*cs;

	cs = str;
	i = 0;
	while (n > 0)
	{
		cs[i] = c;
		i++;
		n--;
	}
	return (str);
}
