/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:31:51 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/06 10:29:10 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	allocate memory for count elements of specific size, initialize to zero */
/*	point to memory and return pointer */
/*	return NULL pointer in case of failed allocation */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count * size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
