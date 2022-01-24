/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:22 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 16:21:52 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_intlen(int n)
{
	unsigned int	len;

	len = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
