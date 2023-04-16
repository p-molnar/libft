/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char_realloc.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/16 13:40:27 by pmolnar       #+#    #+#                 */
/*   Updated: 2023/04/16 14:46:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_char_realloc(char *ptr, size_t size)
{
	char	*new_ptr;
	size_t	len;

	if (ptr == NULL)
		return (malloc(size * sizeof(char)));
	len = ft_strlen(ptr);
	if (size == 0)
		new_ptr = ft_strdup(ptr);
	else
	{
		new_ptr = malloc(size * sizeof(char));
		if (!new_ptr)
			return (NULL);
		if (size <= len)
			ft_strlcpy(new_ptr, ptr, size);
		else
			ft_strlcpy(new_ptr, ptr, len + 1);
	}
	free(ptr);
	return (new_ptr);
}
