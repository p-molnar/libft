/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:27 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 20:06:41 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (!*s1 && !*s2)
			return (0);
		if (*s1 != *s2)
			return ((unsigned char)*(s1) - (unsigned char)*(s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
