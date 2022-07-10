/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:43 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 20:57:29 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstlast -- gets the last node of the list 
//
//	DESCRIPTION
//		Returns the last node of the list.
//
//	RETURN VALUES
//		the last node of the linked list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp && (*tmp).next)
		tmp = (*tmp).next;
	return (tmp);
}
