/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atof.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/07 12:49:01 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/03/07 14:16:23 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		-- convert ASCII string to double
// 
//	DESCRIPTION
//		The ft_atof() function converts the initial portion of the string 
//		pointed to by str to double representation.
// 
//	RETURN VALUES
//		The ft_atof() function returns a portion of the string that has been 
//		converted to double.

#include "libft.h"

double	ft_atof(const char *str)
{
	int			sign;
	double		div;
	double		num;
	const int	coeff[2] = {+1, -1};

	sign = 1;
	num = 0;
	div = 0.1;
	while (ft_isspace(*str))
		str++;
	if (*str == CHAR_MINUS || *str == CHAR_PLUS)
		sign = coeff[(*str++ == CHAR_MINUS)];
	while (ft_isdigit(*str))
		num = num * 10 + ft_atod(*str++);
	if (*str == CHAR_DOT)
		str++;
	while (ft_isdigit(*str))
	{
		num += div * ft_atod(*str);
		div /= 10.0;
		str++;
	}
	return (sign * num);
}
