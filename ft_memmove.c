/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:54 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 22:58:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr_dst;
	int		dir;

	ptr_dst = dst;
	dir = 1;
	if (src < dst)
	{
		dir = -1;
		src += len - 1;
		ptr_dst += len - 1;
	}
	while (len && (dst || src))
	{
		*(char *)ptr_dst = *(char *)src;
		ptr_dst += dir;
		src += dir;
		len--;
	}
	return (dst);
}
