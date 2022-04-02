/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:49:29 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/01 19:34:55 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dc;
	unsigned char	*sc;

	if (!dest && !src)
		return (NULL);
	dc = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (n--)
		*(dc++) = *(sc++);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	buff[] = "Malakais jamboori";
	char	*ret;

	ret = ft_memcpy(buff, (void *)0, 3);
	printf("ft_memcpy NULLs : %s\n", ret);
	ret = memcpy(buff, (void *)0, 3);
	printf("memcpy NULLs : %s\n", ret);

	return (0);
}
*/
