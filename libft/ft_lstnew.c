/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:54:04 by smuravye          #+#    #+#             */
/*   Updated: 2023/10/13 10:03:23 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_item;

	list_item = malloc(sizeof(t_list));
	if (!list_item)
		return (NULL);
	list_item->content = content;
	list_item->next = NULL;
	return (list_item);
}
