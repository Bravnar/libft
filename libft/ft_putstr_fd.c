/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:09:53 by codespace         #+#    #+#             */
/*   Updated: 2023/08/15 08:20:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while(*s)
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