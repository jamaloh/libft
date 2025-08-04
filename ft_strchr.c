/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:30:30 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/01 15:17:35 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == chr)
			return ((char *)s + i);
		i++;
	}
	if (!chr)
		return ((char *)s + i);
	return (NULL);
}
