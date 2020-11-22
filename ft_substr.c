/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 21:06:55 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/22 20:40:21 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (NULL);
	while (s[start + i] && i < len)
		i++;
	newstr = (char*)malloc(sizeof(char) * i + 1);
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
