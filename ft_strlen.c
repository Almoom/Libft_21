/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:35:54 by ljalikak          #+#    #+#             */
/*   Updated: 2019/04/02 17:09:53 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*byte_zero(const unsigned long *longword_ptr,
	unsigned long low, unsigned long high)
{
	unsigned long			longword;
	const char				*cp;
	int						i;

	while (1)
	{
		longword = *longword_ptr++;
		if (((longword - low) & ~longword & high))
		{
			i = 0;
			cp = (const char *)(longword_ptr - 1);
			while (i < 4)
			{
				if (!cp[i])
					return (cp + i);
				++i;
			}
			if (sizeof(longword) > 4)
				while (i < 8)
					if (!cp[i++])
						return (cp + i - 1);
		}
	}
}

size_t				ft_strlen(const char *str)
{
	const char				*temp;
	const unsigned long		*longword_ptr;
	unsigned long			longword;
	unsigned long			high;
	unsigned long			low;

	temp = str;
	while ((unsigned long int)temp & (sizeof(longword) - 1))
		if (!(*temp++))
			return (temp - str - 1);
	longword_ptr = (unsigned long *)temp;
	high = 0x80808080L;
	low = 0x01010101L;
	if (sizeof(longword) > 8)
		return (0);
	else if (sizeof(longword) > 4)
	{
		high = ((high << 16) << 16) | high;
		low = ((low << 16) << 16) | low;
	}
	return (byte_zero(longword_ptr, low, high) - str);
}
