/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:36:46 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/31 18:08:39 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	rrange;
	int	*buffer;

	i = 0;
	rrange = max - min - 1;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = (int *)malloc(rrange * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (min < max)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return (rrange + 1);
}
