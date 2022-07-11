/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_abs.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 23:20:01 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/07/11 20:38:55 by pmolnar       ########   odam.nl         */
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

double	ft_fabs(double i)
{
	return (i * ((i > 0) - (i < 0)));
}
