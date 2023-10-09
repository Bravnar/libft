/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:14:09 by smuravye          #+#    #+#             */
/*   Updated: 2023/10/09 21:12:22 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i])
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

static char	*malloc_word(char const *s, char c)
{
	size_t	word_length;
	size_t	i;
	char	*word;

	i = 0;
	word_length = word_len(s, c);
	word = (char *)malloc(sizeof(char) * (word_length + 1));
	if (!word)
		return (NULL);
	while (i < word_length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **result[], size_t words)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (words > count)
	{
		if ((*result)[count] == NULL)
		{
			while (words > i)
			{
				if ((*result)[i])
					free(*result[i]);
				i++;
			}
			free(*result);
			*result = NULL;
			return ;
		}
		count++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	split_arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split_arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			split_arr[i++] = malloc_word(s, c);
		}
		while (*s && *s != c)
			s++;
	}
	split_arr[i] = NULL;
	free_all(&split_arr, count_words(s, c));
	return (split_arr);
}

/* #include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	char	**new_arr;

	i = 0;
	if (ac < 2)
		return (0);
	new_arr = ft_split(av[1], ' ');
	while (new_arr[i])
	{
		printf("%s\n", new_arr[i]);
		i++;
	}
	free(new_arr);
	return (0);
} */
