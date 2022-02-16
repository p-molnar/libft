/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:15 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/29 22:58:12 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		size;

	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	size = dstsize + src_len;
	if (dst_len < dstsize)
	{
		ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
		size = dst_len + src_len;
		return (size);
	}
	return (size);
}
