/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:41 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 20:52:05 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstdelone -- deletes one node of the linked list 
//
//	DESCRIPTION
//		Takes as a parameter a node and frees the memory of the node’s content
//		using the function ’del’ given as a parameter and free the node.
//		The memory of ’next’ must not be freed.

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del((*lst).content);
		free(lst);
	}
}
