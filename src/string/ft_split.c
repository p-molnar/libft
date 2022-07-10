/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:52:05 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/06/21 08:35:28 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		ft_split -- splits up a string at a given delimeter
//
//	DESCRIPTION
//		Allocates (with malloc(3)) and returns an array
//		of strings obtained by splitting ’s’ using the
//		character ’c’ as a delimiter.  The array must end
//		with a NULL pointer.
//
//	RETURN VALUES
//		The array of new strings resulting from the split.
//		NULL if the allocation fails.

#include <stdlib.h>
#include "libft.h"

static unsigned int	el_count(char *s, char delim)
{
	int				in_word;
	unsigned int	el_count;

	in_word = 0;
	el_count = 0;
	while (s && *s)
	{
		if (*s == delim)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			el_count++;
		}
		s++;
	}
	return (el_count);
}

static char	*get_el_ptr(char *s, char delim, char mode)
{
	while (s && *s && (mode == 's' || mode == 'e'))
	{
		if (*s != delim && mode == 's')
			return (s);
		else if (*s == delim && mode == 'e')
			return (s);
		s++;
	}
	return (s);
}

static char	**free_all(char **arr)

{
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	free(arr);
	return (NULL);
}

static void	push_arr(char **arr, char *el)
{
	while (*arr)
		arr++;
	*arr = el;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*el;
	char	*start;
	char	*end;

	start = (char *)s;
	arr = NULL;
	if (s)
		arr = ft_calloc((el_count((char *)start, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (s && *start)
	{
		start = get_el_ptr(start, c, 's');
		end = get_el_ptr(start, c, 'e');
		if (start == end)
			return (arr);
		el = ft_substr(start, 0, (end - start));
		if (!el)
			return (free_all(arr));
		push_arr(arr, el);
		start = end;
	}
	return (arr);
}
