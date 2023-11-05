/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:35:10 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/01 18:04:14 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	aux = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (src[i] && j + 1 < dstsize)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (aux + ft_strlen(src));
}

/*int	main(void)
{
	char	destino[10] = "abc";
	char	fuente[] = "def";
	size_t	tamano_destino = 2;

	printf("Cadena original en destino: %s\n", destino);
	size_t	resultado = ft_strlcat(destino, fuente, tamano_destino);
	printf("Después de ft_strlcat: %s\n", destino);
	printf("Tamaño total  %zu\n", resultado);
	return (0);
}*/
