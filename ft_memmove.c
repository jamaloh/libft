/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:34:01 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 13:28:37 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	copy elements of src to dst until the nth element and return dst */
/*	if addresses overlap, copy from back for safe process */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dst;
	unsigned const char	*ptr_src;
	size_t				i;

	if (dst == src || len == 0)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned const char *)src;
	i = len;
	if (ptr_dst > ptr_src)
	{
		while (i > 0)
		{
			i--;
			ptr_dst[i] = ptr_src[i];
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, len);
	return (dst);
}
