/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:48 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 21:11:02 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_lstsize -- gives the number of nodes in a linked list 
//
//	DESCRIPTION
//		Counts the number of nodes in a list.
//
//	RETURN VALUES
//		The length of the list

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = (*tmp).next;
	}
	return (i);
}
