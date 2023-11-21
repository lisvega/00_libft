/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:26:19 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/21 11:41:55 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	j;

	h = 0;
	if (!haystack && len == 0)
		return ((char *)haystack);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len)
	{
		if (haystack[h] == needle[0])
		{
			j = 0;
			while ((needle[j] != '\0'
					&& haystack[h + j] == needle[j] && (h + j) < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + h);
				j++;
			}
		}
		h++;
	}
	return (NULL);
}
/*int	main(void)
{
	char str[] = "soy un robot";
	char sub_str[] = "robo";
	char *ptr = ft_strnstr(str, sub_str, 15);
	printf("%s", ptr);
	return (0);
}*/
