/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 17:51:35 by pmolnar       #+#    #+#                 */
/*   Updated: 2022/01/30 19:18:34 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	num_len;
	size_t	i;
	int		num_negative;
	char	*str;

	i = 0;
	num_negative = ft_isnegative(n);
	num_len = num_negative + ft_get_num_len(n);
	str = ft_calloc((num_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	if (num_negative)
		str[i++] = '-';
	while (n)
	{
		str[i] = ft_dtoa(ft_abs(n % 10));
		n /= 10;
		i++;
	}
	ft_reverse_str(&str[num_negative]);
	return (str);
}
