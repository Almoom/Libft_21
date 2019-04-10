/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:18:39 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/09 17:33:41 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static size_t	ft_counter(const char *s, char c)
{
	size_t		i;
	const char	*t;

	i = 1;
	t = s;
	while (*t != '\0')
	{
		if (*t == c)
			i++;
		t++;
	}
	return (i);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t		j;
	size_t		k;
	char		**rez;
	const char	*t;

	j = 0;
	k = 0;
	t = s;
	rez = (char**)malloc(sizeof(char*) * (ft_counter(s, c) + 1));
	while (j < ft_counter(s, c))
	{
		rez[j] = ft_strnew(ft_strlen(t));
		while (*t != c && *t != '\0')
			rez[j][k++] = *t++;
		if (*t == c)
			t++;
		rez[j][k] = '\0';
		printf("%s\n", rez[j]);
		k = 0;
		j++;
	}
	return (rez);
}
