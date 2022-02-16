/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 23:20:01 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 13:05:43 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME																		
//   	abs -- integer absolute value function
//
// 	DESCRIPTION
//    	The abs() function computes the absolute value of the integer i.
//
// 	RETURN VALUES
//    	The abs() function returns the absolute value.

int	ft_abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
