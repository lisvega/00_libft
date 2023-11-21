/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:46:09 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/21 11:33:12 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = NULL;
	if (!s || ft_strlen(s) <= start)
		return (ft_strdup("\0"));
	if (ft_strlen(s + start) <= len)
		len = ft_strlen(s + start);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		new_str[j] = s[i];
		j++;
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}

/*int main(void)
{
    char *str = "programación";
    char *sub = ft_substr(str ,3, 7);
    printf("%s", sub);
    return 0;
}*/
