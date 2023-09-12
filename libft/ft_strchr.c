/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bravnar <bravnar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:52:03 by codespace         #+#    #+#             */
/*   Updated: 2023/09/09 08:47:53 by bravnar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	char string[5] = "hello";
	printf("The char found is here: %s\n", ft_strchr(string,'l'));
	printf("The char found using actual formula here: %s\n", strchr(string,'l'));
} */