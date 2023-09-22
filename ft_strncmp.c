/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pborrull <pborrull@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:29:40 by pborrull          #+#    #+#             */
/*   Updated: 2023/09/19 11:08:00 by pborrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && ((str1[i]) == (str2[i])))
	{
		i++;
	}
	return (str2[i] - str1[i]);
}
/*
int	main(void)
{
	char	s[8] = "carmel";
	char	d[9] = "caamel";

	ft_strncmp(s,d,6);
	return 0;
}*/
