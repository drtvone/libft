/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturnip <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:17:21 by rturnip           #+#    #+#             */
/*   Updated: 2020/11/27 18:19:53 by rturnip          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*rez;
	size_t	i;
	int		k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(rez = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (((char *)s1)[i])
	{
		rez[i] = ((char *)s1)[i];
		i++;
	}
	while (((char *)s2)[k])
	{
		rez[i] = ((char *)s2)[k];
		i++;
		k++;
	}
	rez[i] = '\0';
	return (rez);
}
