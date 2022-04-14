/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:51:36 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/14 14:42:33 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec_putnbr(long long int n, int fd)
{
	if (n > 9)
		rec_putnbr(n / 10, fd);
	ft_putchar_fd('0' + (n % 10), fd);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	long long int	n;
	int				is_neg;

	n = (long long int)nbr;
	is_neg = n < 0;
	write(fd, "-", is_neg);
	n *= 1 - (2 * is_neg);
	rec_putnbr(n, fd);
}
