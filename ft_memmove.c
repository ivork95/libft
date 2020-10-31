/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 13:51:26 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/31 17:08:19 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*lastd;
	const char	*lasts;
	const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (n--)
			*d = *s;
	}
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}

int main (void)
{
   char dest[30] = "test ja hoor dit is test";
   printf("Before memmove dest = %s\n", dest);
   printf("After memcpy  dest  = %s\n", memcpy(dest +4, dest + 2, 4));
   printf("After memmove dest  = %s\n", memmove(dest +4, dest + 2, 4));
   //printf("After memmove dest  = %s\n", ft_memmove(dest +4, dest + 2, 4));
   return(0);
}