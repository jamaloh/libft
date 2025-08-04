/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:24:15 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:41:49 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	if c is printable value, return 1 */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isprint("a"));
// 	return (0);
// }
