/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:08 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/02/24 23:55:13 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		strchr, strrchr -- locate character in string
//	
//	DESCRIPTION
//		The strchr() function locates the first occurrence of c (converted to a
//		char) in the string pointed to by s.  The terminating null character is
//		considered to be part of the string; therefore if c is `\0', the func-
//		tions locate the terminating `\0'.
//		The strrchr() function is identical to strchr(), except it locates the
//		last occurrence of c.
//	
//	RETURN VALUES
//		The functions strchr() and strrchr() return a pointer to the located
//		character, or NULL if the character does not appear in the string.

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)(c))
		return ((char *)s);
	return (NULL);
}
