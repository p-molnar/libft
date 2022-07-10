/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:42 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 20:54:10 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstiter -- applies functino for each node of linked list
//
//	DESCRIPTION
//		Iterates the list ’lst’ and applies the function ’f’ on the content 
//		of each node.	

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f((*tmp).content);
		tmp = (*tmp).next;
	}
}
