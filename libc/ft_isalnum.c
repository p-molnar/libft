/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:23 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 15:48:07 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		isalnum -- alphanumeric character test
// 
//	DESCRIPTION
//		The isalnum() function tests for any character for which isalpha(3) 
//		or isdigit(3) is true.  The value of the argument must be representable
//		as an unsigned char or the value of EOF.
// 
//	RETURN VALUES
//		The isalnum() function returns zero if the character tests false and 
//		returns non-zero if the character tests true.

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
