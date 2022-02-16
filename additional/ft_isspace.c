/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:33 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/31 20:24:44 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		isspace -- white-space character test
//		
//	DESCRIPTION
//		The isspace() function tests for the white-space characters.
//		For any locale, this includes the following standard characters:
//		
//		``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''
//		
//		In the "C" locale, isspace() successful test is limited to these 
//		characters only.  The value of the argument must be representable 
//		as an unsigned char or the value of EOF.
//		
//	RETURN VALUES
//		The isspace() function returns zero if the character tests false and 
//		returns non-zero if the character tests true.	 	 

int	ft_isspace(int c)
{
	return (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r');
}
