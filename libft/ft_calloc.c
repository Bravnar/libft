/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:35:14 by smuravyev         #+#    #+#             */
/*   Updated: 2023/10/02 17:26:43 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cset;
	size_t	total_size;

	total_size = nmemb * size;
	cset = malloc(total_size);
	if (!cset)
		return (NULL);
	ft_bzero(cset, total_size);
	return (cset);
}
