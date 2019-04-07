/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:53:32 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/06 13:58:01 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *app, size_t n)
{
	char		*d;
	const char	*a;
	size_t		sd;
	size_t		t;

	sd = ft_strlen(dest);
	d = dest;
	a = app;
	t = 0;
	while (t++ < sd)
		d++;
	if (sd == n)
		return (sd + ft_strlen(app));
	t = n - ft_strlen(dest);
	while (*a != '\0')
	{
		if (t != 1)
		{
			*d++ = *a;
			t--;
		}
		a++;
	}
	*d = '\0';
	return (sd + ft_strlen(app));
}
