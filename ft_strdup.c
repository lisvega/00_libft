/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:58:10 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/01 16:12:29 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	char	*aux;

	duplicate = (char *)malloc(ft_strlen(s1) + 1);
	if (!duplicate)
		return (NULL);
	aux = duplicate;
	while (*s1)
	{
		*duplicate = *s1;
		duplicate++;
		s1++;
	}
	*duplicate = '\0';
	return (aux);
}

/*int	main(void)
{
    char	str[] = "42student";
	char	*dup = ft_strdup(str);
	printf("el string original es:\n%s\nel duplicado es:\n%s\n", str,dup);
	return (0);
}*/
