/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:40 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 20:49:53 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstclear -- clears every node of a linked list
//
//	DESCRIPTION
//		Deletes and frees the given node and every successor of that node, 
//		using the function ’del’ and free(3). Finally, the pointer to the 
//		list must be set to NULL.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst)
	{
		while (*lst)
		{
			next = (*(*lst)).next;
			ft_lstdelone(*lst, del);
			*lst = next;
		}
	}
}
