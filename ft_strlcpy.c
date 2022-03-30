/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:55:44 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:55:47 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if ((src_len + 1) < size)
		ft_memcpy(dest, src, src_len + 1);
	else if (size)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (src_len);
}
/*{
	size_t	src_len;

	src_len = -1;
	while (src[++src_len] && (src_len < (size - 1)))
		dest[src_len] = src[src_len];
	if (size)
		dest[src_len] = '\0';
	while (src[src_len])
		src_len++;
	return (src_len);
}*/
/*
#define LIMIT 10
int	main(void)
{
	char	dest[128];
	char	src[] = "La vie est un barage de marde";
	int	ret;

	ft_putstr("Init str : ");
	ft_putstr(src);
	ft_putchar('\n');
	
	ret = ft_strlcpy(dest, src, LIMIT);
	ft_putstr("dest str: ");
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr("ret len : ");
	ft_putnbr(ret);
	ft_putchar('\n');
	return (0);
}
*/
