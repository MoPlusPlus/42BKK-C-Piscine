/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:08:05 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/24 23:50:21 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//n * (n-1)!

int	ft_recursive_factorial(int nb)
{
	int	sum;

	if (nb < 0)
		return (0);
	if (nb < 1)
	{		
		return (1);
	}
	sum = (nb * ft_recursive_factorial(nb - 1));
	if (sum < 0)
		return (0);
	return (sum);
}
