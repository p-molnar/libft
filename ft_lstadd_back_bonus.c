/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:37 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/04 18:05:23 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			last_node = ft_lstlast(*lst);
			(*last_node).next = new;
		}
	}
}
