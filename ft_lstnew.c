/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:47:11 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/06 13:38:06 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates memory (using malloc(3)) and returns a new node. */
/*	The ’content’ member variable is
 *	initialized with the given parameter ’content’. */
/*	The variable ’next’ is initialized to NULL. */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
