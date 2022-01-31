/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isnegative.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:31 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 17:43:05 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_isnegative -- integer sign test
//
//	DESCRIPTION
//		ft_isnegative() function tests if the integer is negative.
//
//	RETURN VALUES
//		ft_isnegative() function returns 1 if the integer is negative, 
//		0 otherwise.

int	ft_isnegative(int n)
{
	return (n < 0);
}
