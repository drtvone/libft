/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturnip <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:10:18 by rturnip           #+#    #+#             */
/*   Updated: 2020/11/27 16:56:04 by rturnip          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

static void		ft_rev(char *itoa)
{
	size_t	i;
	size_t	len;
	char	one;

	i = 0;
	len = ft_strlen(itoa) - 1;
	while (i < len)
	{
		one = itoa[i];
		itoa[i] = itoa[len];
		itoa[len] = one;
		i++;
		len--;
	}
}

static int		ft_minus(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

static int		ft_minus_two(int n, char *itoa, size_t count)
{
	int	k;

	k = 0;
	itoa[count] = '\0';
	if (n < 0)
		k = -1;
	return (k);
}

char			*ft_itoa(int n)
{
	char	*itoa;
	size_t	i;
	size_t	count;
	int		k;

	i = 0;
	k = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count(n);
	if (!(itoa = malloc(sizeof(char) * (count + 1))))
		return (NULL);
	k = ft_minus_two(n, itoa, count);
	n = ft_minus(n);
	if (n == 0)
		itoa[i++] = '0';
	while (n > 0)
	{
		itoa[i++] = n % 10 + 48;
		n = n / 10;
	}
	if (k == -1)
		itoa[i] = '-';
	ft_rev(itoa);
	return (itoa);
}
