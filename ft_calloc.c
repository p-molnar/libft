/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:19 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 23:23:52 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	obj_size;
	void	*obj;

	obj_size = count * size;
	obj = malloc(obj_size);
	if (!obj)
		return (NULL);
	ft_bzero(obj, obj_size);
	return (obj);
}
