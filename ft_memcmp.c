/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:49:36 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:59:46 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (n && (*sc1 == *sc2))
	{
		sc1++;
		sc2++;
		n--;
	}
	return ((n > 0) * (*sc1 - *sc2));
}
