/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:43:25 by smuravyev         #+#    #+#             */
/*   Updated: 2023/10/05 22:41:36 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	in_set_count(const char *s1, const char *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (is_in_set(s1[i], set))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		count;
	int		i;
	char	*trimmed;

	i = 0;
	count = in_set_count(s1, set);
	trimmed = (char *)malloc(sizeof(char) * (ft_strlen(s1) - count + 1));
	if (!trimmed)
		return (NULL);
	while (*s1)
	{
		while (is_in_set(*s1, set))
			s1++;
		if (*s1)
			trimmed[i++] = *s1;
		s1++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

#include <stdio.h>

int	main()
{
	char	*s1 = "   Hello, World   ";
	char	*trimmed = ft_strtrim(s1, " ");
	printf("Trimmed string: %s\n", trimmed);
}