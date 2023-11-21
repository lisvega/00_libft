/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:35:10 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/21 11:44:28 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	if (!dst && dstsize == 0)
		return (0);
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

/* int	main(void)
{
	char	dst[10] = "abc";
	char	src[] = "def";
	size_t	size1 = 6;

	size_t	result = ft_strlcat(dst, src, size1);
	printf("Después de ft_strlcat: %s\n", dst);
	printf("Tamaño total  %zu\n", result);
	return (0);
} */
