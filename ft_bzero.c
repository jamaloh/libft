/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:10:44 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:35:19 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	fill/overwrite n memory pointed to by s with zeros */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <strings.h>

/*int main(void)
{
	char s[10] = "Garbage";
	ft_bzero(s, 1);
	printf("%s\n", s);
	ft_memcpy(s, "Garbage", 10);
	bzero(s, 1);
	printf("%s\n", s);
	return (0);
}*/
