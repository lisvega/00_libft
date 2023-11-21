/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:30:38 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/19 19:58:34 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	digitlen;
	int	aux;

	digitlen = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		digitlen++;
	}
	aux = n;
	while (aux > 0)
	{
		aux /= 10;
		digitlen++;
	}
	return (digitlen);
}

char	*ft_itoa(int n)
{
	char		*string;
	int			len;
	long int	nbr;

	len = digits(n);
	nbr = n;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	string[len] = '\0';
	if (nbr == 0)
		string[0] = '0';
	if (nbr < 0)
	{
		string[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{	
		len--;
		string[len] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (string);
}
/*int main(void)
{
	int number = -2147483648;
	printf("%s", ft_itoa(number));
	return 0;
}*/