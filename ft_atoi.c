/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:52 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/05 17:04:32 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{	
	int	sign;
	int	sol;

	sign = 1;
	sol = 0;
	while ((*str == 32)
		|| (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sol = sol * 10 + (*str - 48);
		str++;
	}
	return (sign * sol);
}

/*int	main(void)
{
   	char	str[] = "  -1234ajhdfh35";

    printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
    return (0);
}*/
