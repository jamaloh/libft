/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:49:57 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:44:45 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Takes a node as parameter and frees its content
 *	using the function ’del’. */
/*	Free the node itself but does NOT free the next node. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
