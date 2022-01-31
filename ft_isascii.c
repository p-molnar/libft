/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:26 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 17:16:38 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		isascii -- test for ASCII character
//
//	DESCRIPTION
//		The isascii() function tests for an ASCII character, which is any 
//		character between 0 and octal 0177 inclusive.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}
