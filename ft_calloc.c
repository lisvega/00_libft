/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:48:03 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/05 16:29:47 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*string;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	string = malloc(count * size);
	if (!string)
		return (NULL);
	ft_bzero(string, count * size);
	return (string);
}
/*int main(void)
{
	int *arr;
	int n = 5;

	arr = (int *)calloc(n, sizeof(arr));
	printf("valores del array:\n");
	printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
	return(0);
}*/