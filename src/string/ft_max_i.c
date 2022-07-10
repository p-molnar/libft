/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_max_i.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/07 18:34:03 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/06/01 15:45:47 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int	ft_max_i(size_t arg_count, ...)
{
	size_t	i;
	va_list	args;
	int		curr_val;
	int		max_val;

	i = 0;
	va_start(args, arg_count);
	max_val = va_arg(args, int);
	while (i < (arg_count - 1))
	{
		curr_val = va_arg(args, int);
		if (curr_val > max_val)
			max_val = curr_val;
		i++;
	}	
	va_end(args);
	return (max_val);
}
