/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pborrull <pborrull@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:18:06 by pborrull          #+#    #+#             */
/*   Updated: 2023/09/19 11:06:32 by pborrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int d)
{
	int		i;
	char	c;

	i = 0;
	c = (char)d;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i] != c && s[i] != '\0')
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*
int	main(void)
{
	const char *s = "sdsfdsd";
	ft_strrchr(s, 99);
	return 0;
}*/
