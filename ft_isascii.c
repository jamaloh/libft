/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:20:43 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:37:00 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	if c is ASCII value, return 1 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isascii("a"));
// 	return (0);
// }
