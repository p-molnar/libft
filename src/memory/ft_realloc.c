/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/16 13:40:27 by pmolnar       #+#    #+#                 */
/*   Updated: 2023/04/25 09:45:10 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	*ft_realloc(void *obj, size_t obj_size, size_t new_size)
{
	void	*new_ptr;

	new_ptr = malloc(new_size);
	if (obj == NULL)
		return (new_ptr);
	if (new_size == 0)
		new_ptr = ft_memcpy(new_ptr, obj, obj_size);
	else
	{
		if (new_size <= obj_size)
			ft_memcpy(new_ptr, obj, new_size);
		else
			ft_memcpy(new_ptr, obj, obj_size);
	}
	free(obj);
	return (new_ptr);
}
