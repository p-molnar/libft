/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dtoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:21 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/03/07 13:03:44 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		dtoa -- converts digit to ascii character

//	DESCRIPTION
//		ft_dtoa() function attempts to convert an integer to its 
//		corresponding ascii value.

//	RETURN VALUES
//		if the conversion is successful then the function returns the converted 
//		value as character, otherwise, a null terminator.

#include "libft.h"

char	ft_dtoa(int d)
{
	if (d >= 0 && d <= 9)
		return (d + CHAR_ZERO);
	return ('\0');
}
