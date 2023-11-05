/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:36:11 by lisriver          #+#    #+#             */
/*   Updated: 2023/10/12 14:17:24 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n --)
	{
		*str++ = '\0';
	}
}

/*int	main(void)
{
	char	str[] = "computadora";

	ft_bzero(str, 7);
	write(1, str, sizeof(str));
	return (0);
}*/
