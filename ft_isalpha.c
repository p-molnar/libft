/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:25 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 22:58:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		isalpha -- alphabetic character test
//
//	DESCRIPTION
//		The isalpha() function tests for any character for which isupper(3) or
//		islower(3) is true.
//
//	RETURN VALUES
//		The isalpha() function returns zero if the character tests false and
//		returns non-zero if the character tests true.

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
