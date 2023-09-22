/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pborrull <pborrull@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:29:43 by pborrull          #+#    #+#             */
/*   Updated: 2023/09/21 11:42:15 by pborrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	csize;

	csize = count * size;
	mem = malloc(csize);
	if (mem != NULL)
	{
		ft_memset(mem, 0, csize);
		return (mem);
	}
	else
		return (NULL);
}
/*
int	main(void)
{
	int j = 6; 
	int *p = ft_calloc(j, sizeof(j));
	int i = 0;
	while ( i < j )
	{
		printf("%d\n", p[i]);
		i ++;
	}
	return (0);
}*/
