/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:53:40 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/30 14:14:11 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && (i < n))
		i++;
	return (((unsigned char)s1[i] - (unsigned char)s2[i]) * (i < n));
}
/*
#include <string.h>
int	main(void)
{
	int	ret;
	int	ret2;
	ret = ft_strncmp("test\200", "test\0", 6);
	ft_putstr("ft_strncmp : ");
	ft_putnbr(ret);
	ft_putstr("\n");
	ret2 = ft_strncmp("test\200", "test\0", 6);
	ft_putstr("strncmp : ");
	ft_putnbr(ret2);
	return (0);
}
*/
