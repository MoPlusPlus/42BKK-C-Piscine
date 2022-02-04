/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:56:07 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/31 17:34:59 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*dest;

	i = 0;
	range = max - min - 1;
	if (min >= max)
		return (0);
	dest = (int *)malloc(range * sizeof(int));
	if (dest == NULL)
		return (0);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
