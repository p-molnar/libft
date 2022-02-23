/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:56 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 16:29:26 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		memset -- fill a byte string with a byte value
//	
//	DESCRIPTION
//		The memset() function writes len bytes of value c (converted to an
//		unsigned char) to the string b.
//	
//	RETURN VALUES
//		The memset() function returns its first argument.

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
