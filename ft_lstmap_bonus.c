/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:44 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/04 18:07:54 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
