/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:51:15 by smuravye          #+#    #+#             */
/*   Updated: 2023/10/09 18:13:38 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int numb)
{
	int	i;

	if (numb == 0)
		return (1);
	i = 0;
	if (numb < 0)
		i++;
	while (numb)
	{
		numb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		num_len;
	char	*result;

	num_len = count_digits(n);
	result = malloc(sizeof(char) * (num_len + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	if (!n)
		result[0] = '0';
	while (n)
	{
		if (n < 0)
			result[num_len - 1] = '0' + -(n % 10);
		else
			result[num_len - 1] = '0' + n % 10;
		n /= 10;
		num_len--;
	}
	return (result);
}
