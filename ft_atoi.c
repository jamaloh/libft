/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:19:48 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 18:35:14 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	convert str to int and return the int */
/*	discard leading whitespace characters */
/*	handle sign of string and return integer with corresponding sign */
/*	for each digit in str; expand places of integer and assign value
 *	until non-digit character reached */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", atoi(" 	-0123456789abcd"));
// 	printf("%d\n", ft_atoi(" 	-0123456789abcd"));
// 	return (0);
// }
