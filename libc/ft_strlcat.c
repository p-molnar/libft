/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:15 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/03/08 18:31:09 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		strlcat -- size-bounded string copying and concatenation
//	
//	DESCRIPTION
//		strlcat() take the full size of the destination buffer and
//		guarantee NUL-termination if there is room.  Note that room for the NUL
//	    should be included in dstsize.
//	
//		strlcat() appends string src to the end of dst.  It will append at most
//		dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, 
//		unless dstsize is 0 or the original dst string was longer than dstsize 
//		(in practice this should not happen as it means that either dstsize is 
//		incorrect or that dst is not a proper string).
//		
//		If the src and dst strings overlap, the behavior is undefined.
//	
//	RETURN VALUES
//		strlcat() functions return the total length of the string they tried 
//		to create. For strlcat() that means the initial length of dst plus 
//		the length of src.

#include "libft.h"

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
