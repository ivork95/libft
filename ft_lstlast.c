/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 21:11:53 by ivork         #+#    #+#                 */
/*   Updated: 2020/11/18 13:12:59 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *current;

	if (!lst)
		return (0);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
