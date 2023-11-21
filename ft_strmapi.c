/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:50:10 by lisriver          #+#    #+#             */
/*   Updated: 2023/11/12 15:28:50 by lisriver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;

	if (!s || !f)
		return (NULL);
	mapi = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}

/*char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main(void)
{
	char str1[] = "abcdf";
	char *str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/
