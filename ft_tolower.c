/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 17:04:37 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 17:04:37 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
