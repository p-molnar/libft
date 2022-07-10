/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:20 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 14:55:19 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
// 		ft_count -- counts character occurance in string
//
//	DESCRIPTION
// 		ft_count() function counts character c's occurance 
//		in a string pointed by s. The function counts the null 
//		character as well.
//
//	RETURN VALUE
// 		ft_count() function returns an int, the number of 
//		occurance c was found in s.

#include "libft.h"

size_t	ft_count(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		count += (*s == c);
		s++;
	}
	count += (*s == c);
	return (count);
}
