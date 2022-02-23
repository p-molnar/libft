/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:09 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 15:09:11 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		atoi, atoi_l -- convert ASCII string to integer
// 
//	DESCRIPTION
//		The atoi() function converts the initial portion of the string pointed
//		to by str to int representation.
// 
//	RETURN VALUES
//		The atoi() function returns a portion of the string that has been 
//		converted to int.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			num;
	int			coeff;
	const int	sign[2] = {+1, -1};

	num = 0;
	coeff = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str && (*str == CHAR_PLUS || *str == CHAR_MINUS))
		coeff = sign[(*str++ == CHAR_MINUS)];
	while (*str && ft_isdigit(*str))
		num = 10 * num + (*str++ - CHAR_ZERO);
	return (coeff * num);
}