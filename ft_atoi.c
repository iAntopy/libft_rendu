/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:39:24 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/13 17:53:38 by iamongeo         ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	unsigned long long int	nb;
	int						sign;

	nb = 0;
	sign = 1;
	while (*str && isspace(*str))
		str++;
	if (*str && issign(*str))
	{
		if (!ft_isdigit(*(str + 1)))
			return (0);
		sign -= 2 * (*str == '-');
		str++;
	}
	while (*str && ft_isdigit(*str) && (nb < LLONG_MAX))
		nb = (nb * 10) + (*(str++) - '0');
	if (nb > LLONG_MAX)
		return (-1 + (sign == -1));
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
