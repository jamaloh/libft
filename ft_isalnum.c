/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:54:40 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/06 10:29:18 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	if c is digit or alphabetical character, return 1 */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
