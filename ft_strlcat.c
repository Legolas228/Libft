/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pborrull <pborrull@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:34:40 by pborrull          #+#    #+#             */
/*   Updated: 2023/09/19 14:15:41 by pborrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (size == 0)
		return ('\0');
	while (dst[i] != '\0')
		i++;
	while (i < size && src[j] != '\0')
	{
		dst[i] = src[j];
		i ++;
		j ++;
	}
	return (i);
}
/*
int	main (void)
{
	char s[15] = "sdfsdfs";
	char d[30] = "ress";
	size_t t = 8;
	ft_strlcat(d, s, t);
	return (0);
}*/
