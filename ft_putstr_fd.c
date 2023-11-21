/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:19 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/21 10:24:04 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write (fd, s, ft_strlen(s));
}

/* int	main(void)
{
	char str[]= "pepito";
	ft_putstr_fd(NULL, 1);
	return(0);
} */
