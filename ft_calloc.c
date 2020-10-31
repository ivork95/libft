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
	mem = malloc(nitems * size);
	while (mem++)
		*mem = 0;
	return (mem);
}
