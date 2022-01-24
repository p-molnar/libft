/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:33 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 12:11:38 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr_s = (char *)s;
		s++;
	}
	if (*s == c)
		ptr_s = (char *)s;
	return (ptr_s);
}
