/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:54:46 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/05 17:52:54 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*int	main(void)
{
	char	lowerc = 'b';
	char	upperc = ft_toupper(lowerc);
	printf("caracter original: %c, Mayuscula: %c\n", lowerc, upperc);
	return (0);
}*/
