/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:34:54 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/12 15:36:24 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*void printichar(unsigned int i, char *character)
{
    printf("Índice: %d, Carácter: %c\n", i, *character);
}

int main(void)
{
	char str[] = "hello";
	printf("Original: %s\n", str);
	ft_striteri(str, printichar);
	return (0);
}*/
