/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:34:41 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:40:21 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	for n elements: if s points to c, return first occurrence */

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

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *ptr = "Hello, world!";
// 	ptr = ft_memchr(ptr, 'w', 10);
// 	printf("%s\n", ptr);
// }
