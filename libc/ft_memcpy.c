/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:52 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 15:50:03 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		memcpy -- copy memory area
//
//	DESCRIPTION
//		The memcpy() function copies n bytes from memory area src to memory
//		area dst. If dst and src overlap, behavior is undefined.
//
//	RETURN VALUES
//		The memcpy() function returns the original value of dst.

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
