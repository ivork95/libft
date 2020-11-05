/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 16:36:13 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 16:36:13 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int count_min;
	long int x;

	i = 0;
	count_min = 0;
	x = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i - 1] == '-')
		count_min += 1;
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

// int main()
// {
// 	char *str1;
// 	str1 = "99999999999999999999999999";
// 	printf("atoi = %d\n",atoi(str1));
// 	printf("ft_atoi = %d\n", ft_atoi(str1));
// 	return (0);
// }