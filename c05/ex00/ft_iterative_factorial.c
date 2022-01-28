/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:56:42 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/24 23:46:43 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n! = n * (n-1)!

int	ft_iterative_factorial(int nb)
{
	int	y;
	int	i;

	y = nb;
	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		y = y * i;
		if (y < 0)
			return (0);
		i--;
	}
	return (y);
}
