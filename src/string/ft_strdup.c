/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:10 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/26 12:15:21 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		strdup, strndup -- save a copy of a string
//	
//	DESCRIPTION
//		The strdup() function allocates sufficient memory for a copy of the
//		string s1, does the copy, and returns a pointer to it.  The pointer may
//		subsequently be used as an argument to the function free(3).
//		
//		If insufficient memory is available, NULL is returned.

#include "libft.h"

char	*ft_strdup(const char *s1)
{	
	int		s1_len;
	char	*s_dup;

	s1_len = ft_strlen((char *)s1);
	s_dup = ft_calloc((s1_len + 1), sizeof(char));
	if (!s_dup)
		return (NULL);
	ft_strlcpy(s_dup, s1, s1_len + 1);
	return (s_dup);
}
