/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bravnar <bravnar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:52:14 by bravnar           #+#    #+#             */
/*   Updated: 2023/08/14 22:02:47 by bravnar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("The length of your string is: %ld\n", ft_strlen(av[1]));
	return (0);
} */