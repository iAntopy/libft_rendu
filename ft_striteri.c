/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:55:16 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 15:55:17 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}
/*
void	ft_tolwr(unsigned int i, char *c)
{
	*c += 32 * ft_isupper(*c);
}

void	ft_toupr(unsigned int i, char *c)
{
	*c -= 32 * ft_islower(*c);
}

void	ft_oddeven(unsigned int i, char *c)
{
	*c -= 32 * ft_islower(*c) * (i % 2);
	*c += 32 * ft_isupper(*c) * !(i % 2);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_putstr("init str : ");
		ft_putstr(argv[1]);
		ft_putstr("\n");
		ft_putstr("to lower : ");
		ft_striteri(argv[1], ft_tolwr);
		ft_putstr(argv[1]);
		ft_putstr("\n");
		ft_putstr("to upper : ");
		ft_striteri(argv[1], ft_toupr);
		ft_putstr(argv[1]);
		ft_putstr("\n");
		ft_putstr("odd even : ");
		ft_striteri(argv[1], ft_oddeven);
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	return (0);
}
*/
