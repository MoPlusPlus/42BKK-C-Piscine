/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:40:37 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/26 23:34:52 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check(char *base, int *check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*check = 1;
	while (base[i] && *check == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*check = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*'
			|| base[i] == '=' || base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*check = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		temp;
	int		check;
	long	nb;

	temp = 0;
	check = 0;
	ft_check(base, &check);
	nb = nbr;
	if (check == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[temp])
			temp++;
		if (nb < temp)
			ft_putchar(base[nb]);
		if (nb >= temp)
		{
			ft_putnbr_base(nb / temp, base);
			ft_putnbr_base(nb % temp, base);
		}
	}
}
