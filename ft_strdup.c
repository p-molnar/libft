/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:10 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 17:48:40 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
