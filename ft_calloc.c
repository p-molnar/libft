/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:19 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 12:25:00 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	char	*ptr_obj;

	total_size = count * size;
	ptr_obj = malloc(total_size);
	if (!ptr_obj)
		return (NULL);
	ft_bzero(ptr_obj, total_size);
	return ((void *)ptr_obj);
}
