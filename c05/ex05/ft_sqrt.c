/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:30:21 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/26 22:01:25 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	upper;
	long	lower;
	long	sqrt;

	lower = 0;
	upper = nb;
	if (nb < 0)
		return (0);
	while (lower <= upper)
	{
		sqrt = (upper + lower) / 2;
		if (sqrt * sqrt == nb)
			return ((int) sqrt);
		else if (sqrt * sqrt < nb)
			lower = sqrt + 1;
		else
			upper = sqrt - 1;
	}
	return (0);
}
