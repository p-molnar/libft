/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atod.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:21 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/07/10 21:13:42 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_atod -- convert ascii char to digit

//	DESCRIPTION
//		ft_atod() function attempts to convert a digit expressed in ascii 
//		to its corresponding integer value

//	RETURN VALUES
//		if the conversion is successful then the function returns the 
//		converted integer, otherwise -1.

#include "libft.h"

int	ft_atod(char c)
{
	if (c >= '0' && c <= '9')
		return (c - CHAR_ZERO);
	return (-1);
}
