/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:53:49 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:53:50 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t size)
{
	char	*h;
	size_t	i;
	size_t	j;

	h = (char *)hay;
	if (*ndl == '\0')
		return (h);
	i = -1;
	while (h[++i] && (i < size))
	{
		j = 0;
		while (h[i + j] && ndl[j] && ((i + j) < size) && (h[i + j] == ndl[j]))
			j++;
		if (!ndl[j])
			return (h + i);
	}
	return (NULL);
}
/*
int	main(int argc, char *argv[])
{
	char	haystack[] = "Come and get me ! I dare you !\n";
	char	*ret;

	if (argc > 1)
	{
		ft_putstr("Haystack :");
		ft_putstr(haystack);
		ft_putstr("\n");
		ret = ft_strnstr(haystack, argv[1], ft_atoi(argv[2]));
		if (ret)
			ft_putstr(ret);
		else
			ft_putstr("ret is NULL\n");
	}
	return (0);
}
*/
