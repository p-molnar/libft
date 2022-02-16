/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:19 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 13:39:40 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		calloc -- memory allocation
// 
//	DESCRIPTION
//		The calloc() function contiguously allocates enough space for count
//		objects that are size bytes of memory each and returns a pointer to
//		the allocated memory.
//		The allocated memory is filled with bytes of value zero.
//	RETURN VALUES
// 		If successful, calloc() function return a pointer to allocated memory. 
// 		If there is an error, it returns a NULL pointer.

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
