/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_num_len.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:22 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 15:38:47 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_get_num_len -- gives the number of characters of a number
//
//	DESCRIPTION
//		ft_get_num_len() function calculates the number of characters
//		a number consists of.
//
//	RETURN VALUES
//		ft_get_num_len() function returns the length of the number

#include "libft.h"

size_t	ft_get_num_len(long long n)
{
	size_t	len;

	len = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
