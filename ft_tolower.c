/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:23:56 by lisriver          #+#    #+#             */
/*   Updated: 2023/10/21 14:11:34 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

/*int	main(void)
{
	char	upperc = 'B';
	char	lowerc = ft_tolower(upperc);
	printf("caracter original: %c, minuscula: %c\n", upperc, lowerc);
	return (0);
}*/
