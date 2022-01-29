/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:35 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 22:58:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_substr_len(size_t str_len, unsigned int start, size_t len)
{
	if ((size_t)start > str_len)
		return (0);
	else if (start + len > str_len)
		return (str_len - start);
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	int		substr_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	substr_len = calc_substr_len(s_len, start, len);
	substr = ft_calloc((substr_len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, substr_len);
	return (substr);
}
