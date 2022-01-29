/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:09 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 22:58:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define CHAR_PLUS '+'
#define CHAR_MINUS '-'
#define CHAR_ZERO '0'

int	ft_atoi(const char *str)
{
	int			num;
	int			coeff;
	const int	sign[2] = {1, -1};

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
