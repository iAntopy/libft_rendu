/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:39:24 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 16:01:43 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	issign(char c)
{
	return (c == '+' || c == '-');
}

static int	isspace(char c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}	

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	i = 0;
	while (nptr[i] && isspace(nptr[i]))
		i++;
	if (nptr[i] && issign(nptr[i]))
	{
		if (!ft_isdigit(nptr[i + 1]))
			return (0);
		sign = 1 - (2 * (nptr[i++] == '-'));
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
		nb = (nb * 10) + (nptr[i++] - '0');
	return (sign * nb);
}
