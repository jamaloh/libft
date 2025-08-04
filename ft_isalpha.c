/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:56:35 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:36:28 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	if c is alphabetical character, return 1 */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isalpha('A'));
// 	return (0);
// }
