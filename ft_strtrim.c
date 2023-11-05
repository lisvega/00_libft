/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:00:30 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/05 19:32:01 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*int main(void)
{
    const char *s1 = "a Hola, mundo! a ";
    const char *set1 = "a ";
    char *trimmed1 = ft_strtrim(s1, set1);
    printf("Original: \"%s\"\n", s1);
    printf("Trimmed:  \"%s\"\n\n", trimmed1);
    free(trimmed1);
}*/