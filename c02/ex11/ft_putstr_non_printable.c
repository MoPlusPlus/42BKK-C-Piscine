/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:56:27 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/20 01:19:01 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	map_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (*(hex + n));
}

void	print_hex(int n)
{
	char	c;

	if (n < 0)
		n = 256 + n;
	if (n < 16)
	{
		c = map_hex(n % 16);
		write(1, &c, 1);
	}
	else
	{
		print_hex(n / 16);
		c = map_hex(n % 16);
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	y;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			y = *str;
			write(1, &y, 1);
			str++;
		}
		else
		{
			write(1, "\\", 1);
			if (*str <= 16 && *str >= 1)
				write(1, "0", 1);
			print_hex(*str);
			str++;
		}
	}	
}
