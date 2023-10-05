/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:43:25 by smuravyev         #+#    #+#             */
/*   Updated: 2023/10/05 19:54:28 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	i;
	
	i = 0;
	while (set[i])
	{
		if (c = set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	in_set_count(const char *s1, const char *set)
{
	int	i;
	int count;

	i = 0;
	count 
	while (s1[i])
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	count;
	int	i;
}