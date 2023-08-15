/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:17:51 by codespace         #+#    #+#             */
/*   Updated: 2023/08/15 07:44:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int    nbr;
    
    nbr = n;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nbr *= -1;
    }
    if (nbr < 10)
        ft_putchar_fd(nbr + '0', fd);
    else
    {
        ft_putnbr_fd(nbr / 10, fd);
        ft_putnbr_fd(nbr % 10, fd);
    }
}

/*
int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_putnbr_fd(atoi(av[1]), 1);
        ft_putchar_fd('\n', 1);
    }
    return (0);
}
*/