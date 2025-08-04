/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:34:41 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/01 15:18:37 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	size_t				i;

	ptr = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned const char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
