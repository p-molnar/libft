/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:57 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 16:43:01 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		putchar -- output a character to a specified stream
//
//	DESCRIPTION
//		Outputs the character ’c’ to the given file descriptor.
//
//	RETURN VALUES
//		The function does not have a return value

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
