/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:59 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 16:41:05 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		putendl -- output a character or word to a specified stream 
//					with trailing new line
//
//	DESCRIPTION
//		Outputs the string ’s’ to the given file descriptor followed by
//		a newline.
//
//	RETURN VALUES
//		The function does not have a return value

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
