/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:28 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 17:20:07 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		isdigit, isnumber -- decimal-digit character test
//	
//	DESCRIPTION
//		The isdigit() function tests for a decimal digit character.
//		Regardless of locale, this includes the following characters only:
//		``0''         ``1''         ``2''         ``3''         ``4''
//		``5''         ``6''         ``7''         ``8''         ``9''
//	
//	RETURN VALUES
//		The isdigit() and isnumber() functions return zero if the character 
//		tests false and return non-zero if the character tests true.

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
