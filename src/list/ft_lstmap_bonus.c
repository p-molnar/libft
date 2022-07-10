/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:44 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 21:04:16 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstmap -- iterates through the linked lists with functions applied
//
//	DESCRIPTION
//		Iterates the list ’lst’ and applies the function ’f’ on the content of
//		each node. Creates a new list resulting of the successive 
//		applications of the function ’f’.  The ’del’ function is used to
//		delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*first_link;
	t_list	*new_link;

	if (!lst)
		return (NULL);
	tmp = lst;
	first_link = ft_lstnew(f((*tmp).content));
	if (!first_link)
		return (NULL);
	tmp = (*tmp).next;
	while (tmp)
	{
		new_link = ft_lstnew(f((*tmp).content));
		if (!new_link)
		{
			ft_lstclear(&first_link, del);
			return (NULL);
		}
		ft_lstadd_back(&first_link, new_link);
		tmp = (*tmp).next;
	}
	return (first_link);
}
