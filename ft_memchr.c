/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:06:26 by lisriver          #+#    #+#             */
/*   Updated: 2023/10/17 10:29:46 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	cadena[] = "Ejemplo de búsqueda";
	char	caracter = 'y';
	size_t	longitud = sizeof(cadena);
   
	void *resultado = ft_memchr(cadena, caracter, longitud);
	if(resultado != NULL) 
	{
		printf("Se encontró '%c' en la cadena en la posición %ld.\n",
			caracter, (char *)resultado - cadena);
	}
	else
	{
		printf("'%c' no se encontró en la cadena.\n", caracter);
	}
	return (0);
}*/
