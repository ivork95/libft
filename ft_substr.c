/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:06:55 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/17 12:49:40 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	char	*zero;
	size_t	i;

	if (!s)
		return (0);
	zero = ft_calloc(1, 1);
	if (!zero)
		return (zero);
	if (start > ft_strlen(s) - 1)
		return (zero);
	newstr = (char*)malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}
