/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:28:51 by ljalikak          #+#    #+#             */
/*   Updated: 2019/05/07 17:28:53 by ljalikak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_calc_bit(int n)
{
	char *s;
	char arr[2];

	ft_bzero(arr, 2);
	s = ft_strnew(0);
	while (n > 0)
	{
		arr[0] = n % 2 + '0';
		s = ft_strjoin_free(s, arr, 1, 0);
		n /= 2;
	}
	s = ft_strrev_free(s, 1);
	while (ft_strlen(s) < 8)
		s = ft_strjoin_free("0", s, 0, 1);
	return (s);
}

char		*ft_print_bit(void *v, int size, int flag)
{
	char *s;

	s = ft_strnew(0);
	while (size-- > 0)
	{
		s = ft_strjoin_free(s, ft_calc_bit(*((unsigned char *)v + size)), 1, 0);
		flag == 1 ? ft_putstr(ft_calc_bit(*((unsigned char *)v + size))) : 0;
		flag == 1 ? ft_putstr(size > 0 ? "__" : "\n") : 0;
	}
	return (flag == 1 ? NULL : s);
}
