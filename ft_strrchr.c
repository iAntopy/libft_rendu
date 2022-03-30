/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:00:46 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/30 15:18:36 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	cc;

	ptr = NULL;
	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
			ptr = (char *)s;
		s++;
	}
	if (*s == cc)
		ptr = (char *)s;
	return (ptr);
}
/*
int	main(int argc, char *argv[])
{
	char	*ret;
	if (argc > 2)
	{
		ret = ft_strrchr(argv[1], argv[2][0]);
		if (!ret)
			ft_putstr("ret is NULL\n");
		else
		{
			ft_putstr("Original str : ");
			ft_putstr(argv[1]);
			ft_putstr("\n");
			ft_putstr("ret ptr str : ");
			ft_putstr(ret);
			ft_putstr("\n");
		}
	}
	return (0);
}
*/
