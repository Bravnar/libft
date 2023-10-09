/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:04:21 by bravnar           #+#    #+#             */
/*   Updated: 2023/10/09 15:20:10 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //get back to

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	size_t			on;

	on = n;
	if (!dest && !src)
		return (NULL);
	while (n)
	{
		n--;
		temp[n] = ((unsigned char *)src)[n];
	}
	while (on)
	{
		on--;
		((unsigned char *)dest)[on] = temp[on];
	}
	return (dest);
}
