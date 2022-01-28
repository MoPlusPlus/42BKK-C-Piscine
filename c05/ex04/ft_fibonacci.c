/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:10:30 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/24 23:56:06 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// F(n) = F(n-1) + F(n-2)
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
