/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:06:26 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/17 17:34:42 by lisriver         ###   ########.fr       */
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
/*int main(void)
{
    char str[] = "hola";
    void *ptr;

    ptr = ft_memchr(str, 'o', 4);
    if (ptr != NULL) 
        printf("Caracter encontrado: %c\n", *(char *)ptr);
    else 
        printf("Caracter no encontrado\n");
    return (0);
}*/