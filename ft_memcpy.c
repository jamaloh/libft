/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:22:29 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/06 18:39:57 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	copy elements of src to dst until the nth element and return dst */
/*	do not handle overlapping addresses */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
