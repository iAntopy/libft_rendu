/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:53:26 by iamongeo          #+#    #+#             */
/*   Updated: 2022/04/01 20:52:35 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mstr;
	unsigned int	len;
	unsigned int	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	mstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!mstr)
		return (NULL);
	i = -1;
	while (++i < len)
		mstr[i] = f(i, s[i]);
	mstr[i] = '\0';
	return (mstr);
}

/*
char	ft_toupperi(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

char	ft_rot13(unsigned int i, char c)
{
	if (ft_islower(c))
		return (((c - 'a') + 13) % 26 + 'a');
	else if (ft_isupper(c))
		return (((c - 'A') + 13) % 26 + 'A');
	else
		return (c);
}

char	ft_roti(unsigned int i, char c)
{
	if (ft_islower(c))
		return (((c - 'a') + i) % 26 + 'a');
	else if (ft_isupper(c))
		return (((c - 'A') + i) % 26 + 'A');
	else
		return (c);
}


int	main(int argc, char *argv[])
{
	char	*ret;
	char	*ret2;
	char	*ret3;

	ret = ft_strmapi(argv[1], ft_toupperi);
	ret2 = ft_strmapi(argv[1], ft_rot13);
	ret3 = ft_strmapi(argv[1], ft_roti);
	ft_putstr(argv[1]);
	ft_putstr("\n");
	ft_putstr(ret);
	ft_putstr("\n");
	ft_putstr(ret2);
	ft_putstr("\n");
	ft_putstr(ret3);
	return (0);
}
*/
