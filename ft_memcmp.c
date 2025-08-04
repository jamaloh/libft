/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:07:36 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 13:27:16 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	for n elements: find the first difference between corresponding elements */
/*	if s1 >/< s2, return positive or negative value respectively */
/*	if similar, return 0 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ptr_s1;
	unsigned const char	*ptr_s2;
	size_t				i;

	ptr_s1 = (unsigned const char *)s1;
	ptr_s2 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
