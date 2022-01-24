/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:52 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 18:41:10 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ptr_dst;

	ptr_dst = dst;
	while (n && (dst || src))
	{
		*(char *)ptr_dst = *(char *)src;
		ptr_dst++;
		src++;
		n--;
	}
	return (dst);
}
