/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_reverse_str.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/30 16:20:40 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 19:31:48 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_reverse_str -- reverses the sequence of characters in the string
//
//	DESCRIPTION
//		ft_reverse_str() function reverses the order of the characters in the
//		string. That is, to read the original string, it needs to be read
//		backwards.
//
//	RETURN VALUES
//		ft_reverse_str() returns a pointer to the reversed string.

#include "libft.h"

char	*ft_reverse_str(char *str)
{
	size_t	str_len;
	size_t	i;
	char	tmp;

	str_len = ft_strlen(str);
	i = 0;
	while (i < str_len / 2)
	{
		tmp = str[i];
		str[i] = str[str_len - i - 1];
		str[str_len - i - 1] = tmp;
		i++;
	}
	return (str);
}
