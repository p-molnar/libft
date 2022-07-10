/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:47 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 21:09:09 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstnew -- creates new node for a linked list
//
//	DESCRIPTION
//		Allocates (with malloc(3)) and returns a new node. The member 
//		variable ’content’ is initialized with the value of the parameter
//		’content’.  The variable ’next’ is initialized to NULL.
//
//	RETURN VALUES
//		the new node is returned upon successful node  allocation, 
//		otherwise NULL

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
