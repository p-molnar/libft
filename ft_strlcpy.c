/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:16 by pmolnar       #+#    #+#                 */
/*   Updated: 2021/11/08 11:48:48 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*ptr_src;

	ptr_src = (char *)src;
	if (!dstsize)
		return (ft_strlen(src));
	while (*ptr_src && (dstsize-- - 1))
		*dst++ = *(char *)ptr_src++;
	*dst = '\0';
	return (ft_strlen(src));
}
