/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:55:00 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/28 16:03:17 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	wcount;

	wcount = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		while (*s && (*s != c))
			s++;
		if (*(s - 1) != c)
			wcount++;
	}
	return (wcount);
}

static int	word_splitter(char **tab, char const *s, char c)
{
	int	wcount;
	int	j;

	wcount = 0;
	while (*s)
	{
		j = 0;
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			while (*(s + j) && (*(s + j) != c))
				j++;
			tab[wcount++] = ft_substr(s, 0, j);
		}
		s += j;
	}
	return (wcount);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		wcount;

	wcount = word_counter(s, c);
	tab = malloc(sizeof(char *) * (wcount + 1));
	if (!tab)
		return (NULL);
	word_splitter(tab, s, c);
	tab[wcount] = NULL;
	return (tab);
}
/*
void	print_tab(char **tab)
{
	while (*tab)
	{
		ft_putstr(*(tab++));
		ft_putstr("\n");
	}
}

int	main(int argc, char *argv[])
{
	char	**tab;

	if (argc > 2)
	{
		tab = ft_split(argv[1], argv[2][0]);
		print_tab(tab);
	}
	return (0);
}
*/
