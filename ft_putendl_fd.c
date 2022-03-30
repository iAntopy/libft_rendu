/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:52:05 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:52:07 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;
	
	if (argc > 1)
	{
		fd = open("poggers.txt", O_CREAT | O_WRONLY);
		ft_putendl_fd(argv[1], fd);
		close(fd);
	}
	return (0);
}
*/
