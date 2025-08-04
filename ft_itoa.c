/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalosta- <jalosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:04:36 by jalosta-          #+#    #+#             */
/*   Updated: 2025/08/04 13:17:45 by jalosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	allocates memory and returns string representing integer received as an
	argument */
/*	negative numbers must be handled */

#include "libft.h"

static int	count_digits(int n) /*	return count of digits in integer */
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/*	take least significant digit and promote to correct value */
/*	skip that digit every loop */

static char	*fill_res(int i, char *s, long int num)
{
	while (num > 0)
	{
		s[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		i;
	long	num;

	num = n;
	len = count_digits(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	i = len - 1;
	fill_res(i, result, num);
	return (result);
}
