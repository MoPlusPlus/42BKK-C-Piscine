/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 02:16:32 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/17 21:03:19 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char c1, char c2, char c3)
{
	ft_putchar(c1 + 48);
	ft_putchar(c2 + 48);
	ft_putchar(c3 + 48);
	if (c1 != 7 || c2 != 8 || c3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	f;
	int	s;
	int	t;

	f = 0;
	while (f <= 7)
	{
		s = f + 1;
		while (s <= 8)
		{
			t = s + 1;
			while (t <= 9)
			{
				ft_putchar_multiple(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
