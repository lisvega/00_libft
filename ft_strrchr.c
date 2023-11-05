/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:32:21 by lisriver          #+#    #+#             */
/*   Updated: 2023/10/22 16:49:12 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*string;

	string = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			string = (char *)s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (string);
}

/*int main(void) {
    char cadena[]= "cocacola";
    char letter = 'l';
    char *ultimo = ft_strrchr(cadena, letter);

    printf("Última aparición de '%c' en la cadena: %s\n", letter, ultimo);

    return 0;
}*/
