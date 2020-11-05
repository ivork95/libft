/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 15:20:56 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/31 15:20:56 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
	char *mem;
	if (nitems == 0 || size == 0)
		nitems = size = 1;
	mem = (char*)malloc(nitems * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, (nitems * size));
	return (mem);
}
