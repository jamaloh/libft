/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:10:44 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/06 10:28:58 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	fill/overwrite n memory pointed to by s with zeros */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
