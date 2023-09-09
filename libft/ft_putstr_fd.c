/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bravnar <bravnar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:09:53 by codespace         #+#    #+#             */
/*   Updated: 2023/09/09 08:54:20 by bravnar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

/* int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr_fd(av[1], 1);
		write(1, "\n", 1);
	}
	return (0);
} */