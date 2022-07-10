/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:12 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/26 22:59:26 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME 
//		ft_striteri -- applies function on string
//	
//	DESCRIPTION
//		Applies the function ’f’ on each character of
//		the string passed as argument, passing its index
//		as first argument.  Each character is passed by
//		address to ’f’ to be modified if necessary.
//
//	RETURN VALUE
//		The function doesn not return anything

#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			s_len;
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
