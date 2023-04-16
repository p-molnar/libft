/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/16 17:33:13 by pmolnar       #+#    #+#                 */
/*   Updated: 2023/04/16 17:33:49 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/16 13:20:54 bypmolnar       #+#    #+#                 */
/*   Updated: 2023/04/16 17:32:50 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>
#define READ_SIZE 1

char	*get_next_line(int fd)
{
	int		bytes_read;
	char	curr_char;
	char	*buff;
	int		idx;
	int		prog_running;

	idx = 0;
	buff = NULL;
	prog_running = 1;
	while (prog_running)
	{
		bytes_read = read(fd, &curr_char, READ_SIZE);
		if (bytes_read < 0)
			return (NULL);
		else if (bytes_read == 0)
			return (buff);
		buff = ft_char_realloc(buff, idx + 2);
		if (curr_char == '\n')
			prog_running = 0;
		buff[idx] = curr_char;
		buff[idx + 1] = '\0';
		idx += bytes_read;
	}
	return (buff);
}
