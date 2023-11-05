/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:15:56 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/01 18:20:11 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(void) {
    char character = 'A'; // Carácter que se va a escribir
    int file_descriptor = 1; 
	// 1 es el descriptor de archivo estándar de salida.

    ft_putchar_fd(character, file_descriptor); 
	// Llamamos a la función para escribir el carácter

    return 0;
}*/
