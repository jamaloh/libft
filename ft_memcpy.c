/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:22:29 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 13:27:55 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	copy elements of src to dst until the nth element and return dst */
/*	do not handle overlapping addresses */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	unsigned const char	*ptr_src;
	size_t				i;

	if (n == 0)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}
