/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:39:24 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/01 21:57:26 by iamongeo         ###   ########.fr       */
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
	int	j;
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	i = 0;
	j = 0;
	while (nptr[i] && isspace(nptr[i]))
		i++;
	if (nptr[i] && issign(nptr[i]))
	{
		if (!ft_isdigit(nptr[i + 1]))
			return (0);
		sign = 1 - (2 * (nptr[i++] == '-'));
	}
	while (nptr[i + j] && ft_isdigit(nptr[i + j]) && (j < LLONG_LIM_ND))
		nb = (nb * 10) + (nptr[i + j++] - '0');
	if (j == LLONG_LIM_ND && ((nptr[i + j - 1] - '0') >= (7 + (sign == -1))))
		return (-(sign == 1));
	return (sign * nb);
}
/*
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_putstr("ft_atoi : ");
		ft_putnbr(ft_atoi(argv[1]));
		ft_putstr("\n");
		ft_putstr("atoi : ");
		ft_putnbr(atoi(argv[1]));
		ft_putstr("\n");
	}
	return (0);
}
*/
