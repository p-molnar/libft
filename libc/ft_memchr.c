/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:49 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 15:43:28 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		memchr -- locate byte in byte string
//
//	DESCRIPTION
//		The memchr() function locates the first occurrence of c (converted
//		to an unsigned char) in string s.
//
//	RETURN VALUES
//		The memchr() function returns a pointer to the byte located, or 
//		NULL if no such byte exists within n bytes.

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}	
	return (NULL);
}
