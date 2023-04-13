/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strconcat.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/13 11:10:56 by pmolnar       #+#    #+#                 */
/*   Updated: 2023/04/13 11:12:29 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>
#include <stdlib.h>

char	*strconcat(int n, ...)
{
	va_list	ap;
	char	*tmp;
	char	*r;
	char	*arg;

	va_start(ap, n);
	r = "";
	tmp = NULL;
	while (n-- > 0)
	{
		arg = va_arg(ap, char *);
		if (!arg)
			arg = "";
		r = ft_strjoin(r, arg);
		if (tmp)
			free(tmp);
		tmp = r;
		if (!r)
			return (NULL);
	}
	return (r);
}
