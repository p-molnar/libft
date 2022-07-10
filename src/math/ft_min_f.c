/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_min_f.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/07 18:34:03 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/06/01 15:52:36 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

double	ft_min_f(size_t arg_count, ...)
{
	size_t	i;
	va_list	args;
	double	curr_val;
	double	min_val;

	i = 0;
	va_start(args, arg_count);
	min_val = va_arg(args, double);
	while (i < (arg_count - 1))
	{
		curr_val = va_arg(args, double);
		if (curr_val < min_val)
			min_val = curr_val;
		i++;
	}	
	va_end(args);
	return (min_val);
}
