/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:12:52 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/21 11:07:14 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && *f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}	
	}	
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