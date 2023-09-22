/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pborrull <pborrull@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:24:51 by pborrull          #+#    #+#             */
/*   Updated: 2023/09/19 11:03:17 by pborrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int d)
{
	int		i;
	char	c;

	i = 0;
	c = (char)d;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*
int	main(void)
{
	const char *s = "sdsfdsdc";
	ft_strchr(s, 99);
	return 0;
}*/
