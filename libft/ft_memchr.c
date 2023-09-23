/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bravnar <bravnar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:06:25 by codespace         #+#    #+#             */
/*   Updated: 2023/09/23 12:52:26 by bravnar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (((unsigned char *)s)[n] == ((unsigned char)c))
			return (s);
		n--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Hello, world!";
    int search_char = 'o';
    size_t n = ft_strlen(str);
	
    void *ft_result = ft_memchr(str, search_char, n);
    if (ft_result != NULL) {
        printf("ft_memchr: Found '%c' at position %ld\n", \
            , (char *)ft_result - str);
    } else {
        printf("ft_memchr: '%c' not found\n", search_char);
    }

    void *mem_result = memchr(str, search_char, n);
    if (mem_result != NULL) {
        printf("memchr: Found '%c' at position %ld\n", 
            search_char, (char *)mem_result - str);
    } else {
        printf("memchr: '%c' not found\n", search_char);
    }

    return 0;
} */
