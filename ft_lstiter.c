/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:49:55 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 16:53:39 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates through the list ’lst’ and applies the
 *	function ’f’ to the content of each node.
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
