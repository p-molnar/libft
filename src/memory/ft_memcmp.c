/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:51 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 15:46:06 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		memcmp -- compare byte string
//	 
//	DESCRIPTION
//		The memcmp() function compares byte string s1 against byte string s2.
//		Both strings are assumed to be n bytes long.
//
//	RETURN VALUES
//		The memcmp() function returns zero if the two strings are identical, 
//		otherwise returns the difference between the first two differing bytes
//		(treated as unsigned char values, so that `\200' is greater than `\0',
//		for example).  Zero-length strings are always identical.  This behavior
//		is not required by C and portable code should only depend on the sign of
//		the returned value

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
