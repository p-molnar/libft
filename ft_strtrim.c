/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:34 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 18:50:17 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*first_char;
	char	*last_char;
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	first_char = (char *)s1;
	last_char = (char *)(s1 + (s1_len - 1));
	while (ft_strchr(set, *first_char)
		&& first_char <= last_char)
		first_char++;
	while (ft_strchr(set, *last_char)
		&& first_char <= last_char)
		last_char--;
	return (ft_substr(s1, (first_char - s1), (last_char - first_char + 1)));
}
