/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:43:25 by smuravyev         #+#    #+#             */
/*   Updated: 2023/10/07 12:09:26 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char c, const char *set)
{
	int	i;

	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	def_start(const char *s1, const char *set, size_t start)
{
	while (*s1)
	{
		if (is_in_set(s1[start], set))
			start++;
		else
			return (start);
	}
	return (start);
}

static size_t	def_end(const char *s1, const char *set, size_t end)
{
	while (end > 0)
	{
		if (is_in_set(s1[end], set))
			end--;
		else
			return (end);
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = def_start(s1, set, 0);
	end = def_end(s1, set, ft_strlen(s1) - 1);
	len = end - start;
	trimmed = (char *)malloc(sizeof(char) *(len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i <= len && start <= end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str = "pp01234567890pp";
	char	*set = "p";
	char	*trimmed_str = ft_strtrim(str, set);
	printf("The trimmed string is: %s\n", trimmed_str);
}
 */