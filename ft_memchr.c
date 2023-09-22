/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pborrull <pborrull@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:54:05 by pborrull          #+#    #+#             */
/*   Updated: 2023/09/19 15:07:53 by pborrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while ((i < n) && (str[i] != '\0') && (str[i] != c))
		i ++;
	if (str[i] == c)
		return (&(str[i]));
	else
		return (NULL);
}
/*
int	main(void)
{
	const char *cadena = "serville";
    char *resultado = (char *)ft_memchr(cadena, 'v', 6);
    
    if (resultado != NULL) 
        printf("%s\n", resultado);
   	else 
        printf("No se encontró el carácter.\n");
    return 0;
}*/
