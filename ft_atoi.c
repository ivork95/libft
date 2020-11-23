/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 20:52:30 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/23 13:36:56 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			count_min;
	long int	x;

	i = 0;
	count_min = 0;
	x = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		count_min++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && (x < 2147483647))
	{
		x = x * 10 + str[i] - '0';
		i++;
	}
	if ((x > 2147483647) && (count_min % 2 == 0))
		return (-1);
	if ((x > 2147483648) && (count_min % 2 != 0))
		return (0);
	if (count_min % 2 != 0)
		return (-x);
	return (x);
}
