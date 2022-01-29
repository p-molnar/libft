/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:35 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 22:58:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*buf;
	size_t	mem_size;

	mem_size = ft_intlen(n) + ft_isnegative(n) + 1;
	buf = ft_calloc(mem_size, sizeof(char));
	if (!buf)
		return (NULL);
	*buf = ft_isnegative(n) * '-';
	if (!n)
		*buf = '0';
	while (n)
	{
		*(buf + ft_intlen(n) + \
		ft_isnegative(n) - 1) = ft_dtoa(ft_abs(n % 10));
		n /= 10;
	}
	return (buf);
}
