/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:59:22 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/01 15:17:45 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	cat_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!cat_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cat_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		cat_str[i + j] = s2[j];
		j++;
	}
	cat_str[i + j] = '\0';
	return ((char *)cat_str);
}
