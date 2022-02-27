/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:13 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/27 23:59:58 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_strjoin -- joins two strings
//	
//	DESCRIPTION
//		Allocates (with malloc(3)) and returns a new
//		string, which is the result of the concatenation
//		of ’s1’ and ’s2’.
//	
//	RETURN VALUE
//		ft_strjoin, return the joined string. NULL if the allocation fails.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	buf = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!buf)
		return (NULL);
	ft_memcpy(buf, s1, ft_strlen(s1));
	ft_memcpy(buf + ft_strlen(s1), s2, ft_strlen(s2));
	return (buf);
}
