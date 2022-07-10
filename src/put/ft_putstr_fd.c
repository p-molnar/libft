/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:02 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/23 16:42:41 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		putstr -- output a string to a specified stream
//
//	DESCRIPTION
//		Outputs the string ’s’ to the given file descriptor.
//
//	RETURN VALUES
//		The function does not have a return value

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
