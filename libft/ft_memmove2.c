/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:18:12 by smuravye          #+#    #+#             */
/*   Updated: 2023/10/09 15:26:16 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[i];
		}
	}
	return (dest);
}
