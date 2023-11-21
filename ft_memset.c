/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:35:20 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/17 18:42:05 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s2;

	s2 = (unsigned char *)b;
	while (len --)
		*s2++ = (unsigned char)c;
	return (b);
}

/*int	main(void)
{
	char	str[18];

	ft_memset(str, 'b', 5);
	printf("%s", str);
	return (0);
}*/
