/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 07:55:10 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/26 19:39:02 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

char	*space(char *str)
{
	while (*str <= ' ')
	{
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	base;
	int	sign;

	base = 0;
	sign = 1;
	str = space(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		base = (base * 10) + (*str - '0');
		str++;
	}
	return (base * sign);
}
