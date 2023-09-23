/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bravnar <bravnar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:40:33 by bravnar           #+#    #+#             */
/*   Updated: 2023/09/23 14:58:40 by bravnar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

static char	*ft_sign(char *nptr, int *sign)
{
	int	minus;

	minus = 0;
	while (*nptr == '-' || *nptr == '+' || ft_iswhitespace(*nptr))
	{
		if (*nptr == '-')
			minus++;
		nptr++;
	}
	*sign = minus % 2;
	return (nptr);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	nptr = ft_sign((char *)nptr, &sign);
	while (*nptr == '0')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	if (sign)
		return (-num);
	return (num);
}
