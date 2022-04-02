/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:55:35 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/01 18:21:19 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		n;
	char		*d;
	const char	*s;

	n = size;
	d = dest;
	while (n-- && *d)
		d++;
	dst_len = d - dest;
	n = size - dst_len;
	if (!n)
		return (dst_len + ft_strlen(src));
	s = src;
	while (*s)
	{
		if (n > 1)
		{
			*(d++) = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dst_len + (s - src));
}
/*
int	main(void)
{
	char	dest[128] = "hello ";
//	char	dest2[128] = "Le début de cette phrase";
	char	src[] = "world";
	size_t	ret;

	ret = ft_strlcat(dest, src, 4);
	ft_putstr("ft_strlcat dest : ");
	ft_putstr(dest);
	ft_putstr("\n");
	ft_putstr("ret : ");
	ft_putnbr((int)ret);
	
//	ret = strlcat(dest, src, 128);
//	ft_putstr("\nstrlcat dest2 : ");
//	ft_putstr(dest2);
//	ft_putstr("\n");
//	ft_putstr("ret : ");
//	ft_putnbr((int)ret);
//	ft_putstr("\n");
	return (0);
}
*/
