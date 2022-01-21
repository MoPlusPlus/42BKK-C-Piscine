/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:08:46 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/20 01:36:39 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_hex(unsigned long long nb, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && prev == 1)
		ft_putchar('0', 1);
	if (nb >= 16)
	{
		ft_hex(nb / 16, 0);
		ft_hex(nb % 16, 0);
	}
	else
	{
		ft_putchar(base[nb], 1);
	}
}

void	ft_addr(unsigned long long addr)
{
	unsigned long long	temp;
	int					i;

	temp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (temp < 16)
			ft_putchar('0', 1);
		temp /= 16;
	}
	ft_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			ft_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
		{
			ft_putchar(' ', 2);
		}
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	sizeout;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			sizeout = 16;
		else
			sizeout = size % 16;
		ft_addr((unsigned long long)c + (i * 16));
		ft_putchar(':', 1);
		ft_print_data(c + (i * 16), sizeout);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}
