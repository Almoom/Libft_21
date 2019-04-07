/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 10:04:59 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/07 10:05:02 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		printf("%c\n", '1');
		return (NULL);
	}
	else
	{
		printf("%c\n", '2');
		while (n-- > 0 && s != '\0')
			*d++ = *s++;
	}
	return (dest);
}
