/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:09 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 20:09:25 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str && (*str == '+' || *str == '-'))
	{
		sign = 1 - 2 * (*str == '-');
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		res = 10 * res + (*str - 48);
		str++;
	}
	return (sign * res);
}
