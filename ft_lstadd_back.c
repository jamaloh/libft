/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:50:04 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 15:31:24 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Adds the node ’new’ at the end of the list. */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	ft_lstlast(*lst);
	new->next = *lst;
	*lst = new;
}
