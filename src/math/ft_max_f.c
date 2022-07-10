/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_max_f.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/07 18:34:03 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/06/01 15:49:15 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

double	ft_max_f(size_t arg_count, ...)
{
	size_t	i;
	va_list	args;
	double	curr_val;
	double	max_val;

	i = 0;
	va_start(args, arg_count);
	max_val = va_arg(args, double);
	while (i < (arg_count - 1))
	{
		curr_val = va_arg(args, double);
		if (curr_val > max_val)
			max_val = curr_val;
		i++;
	}	
	va_end(args);
	return (max_val);
}
