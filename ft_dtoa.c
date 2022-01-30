/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dtoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:21 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 17:49:03 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		dtoa -- converts digit to ascii character

//	DESCRIPTION
//		ft_dtoa() function converts a digit to its corresponding ascii character

//	RETURN VALUES
//		if the conversion successfull then the function returns the converted 
//		charater, otherwise, a null terminator.

#include "libft.h"

char	ft_dtoa(int d)
{
	return (d + CHAR_ZERO);
}
