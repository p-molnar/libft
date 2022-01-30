/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:17 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 15:53:20 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		bzero -- write zeroes to a byte string
//
//	DESCRIPTION
//		The bzero() function writes n zeroed bytes to the string s. 
//		If n is zero, bzero() does nothing.

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)s++ = '\0';
}
