/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ivork <ivork@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 16:45:31 by ivork         #+#    #+#                 */
/*   Updated: 2020/10/29 16:45:31 by ivork         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c < 65 || c > 90) && (c < 97 || c > 122))
        return (0);
	else
    	return (1);
}
