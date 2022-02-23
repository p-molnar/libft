/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:54 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 15:59:18 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		memmove -- copy byte string
//
//	DESCRIPTION
//		The memmove() function copies len bytes from string src to string dst.
//		The two strings may overlap; the copy is always done in 
//		a non-destructive manner.
//
//	RETURN VALUES
//		The memmove() function returns the original value of dst.

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
