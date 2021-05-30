/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturnip <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 19:30:30 by rturnip           #+#    #+#             */
/*   Updated: 2020/11/26 23:21:32 by rturnip          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*sour;
	size_t				cat;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	sour = (const unsigned char *)src;
	cat = n;
	while (cat-- > 0)
	{
		if ((*dest++ = *sour++) == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}
