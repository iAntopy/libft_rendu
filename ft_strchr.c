/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:54:45 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/30 16:04:26 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
			return ((char *)s);
		s++;
	}
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*ptr;
	char	buff[] = "tripouille";

	ft_putstr("\n--Custom test : ");
	ft_putstr("\n--Original str : \n");
	ft_putstr(buff);
//	ptr = ft_strchr(buff, 't' + 256);
	ptr = ft_strchr(buff, '\0');
//	ft_putstr("\n--ret str : \n");
	printf("start ptr : %p\n", buff);
	printf("ret ptr : %p\n", ptr);
	printf("buff len : %zu, ret - start : %zu\n", ft_strlen(buff), ptr - buff);
	ft_putstr(ptr);
	

	if (argc > 2)
	{
		ptr = ft_strchr((const char *)argv[1], argv[2][0]);
		if (!ptr)
			ft_putstr("ptr == NULL");
		else
		{
			ft_putstr("\nOriginal str : ");
			ft_putstr(argv[1]);
			ft_putstr("\nret ptr str : ");
			ft_putstr(ptr);
			ft_putstr("\n");
		}
	}
	return (0);
}
*/
