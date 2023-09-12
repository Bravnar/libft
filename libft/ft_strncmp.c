/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:02:57 by codespace         #+#    #+#             */
/*   Updated: 2023/09/12 12:45:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)	ac;
	char 	*str1 = av[1];
	char 	*str2 = av[2];
	size_t	n = atoi(av[3]);
	
	printf("Output with ft_strncmp: %d\n\n", ft_strncmp(str1, str2, n));
	printf("Output with the original strncmp: %d\n\n", strncmp(str1, str2, n));
	return (0);
} */
