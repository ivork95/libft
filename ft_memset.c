/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 13:44:06 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 13:44:06 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	char *cs;

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
// int main () 
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    memset(str,'A',50);
//    puts(str);
   
//    return(0);
// }
