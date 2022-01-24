/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:56 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 17:39:44 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ptr_b;

	ptr_b = b;
	while (len)
	{
		*(char *)ptr_b = (unsigned char)c;
		len--;
		ptr_b++;
	}
	return (b);
}
