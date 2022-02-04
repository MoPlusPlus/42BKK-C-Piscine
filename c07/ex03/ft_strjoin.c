/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:11:34 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/31 21:20:26 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_all_len(int size, char **strs, int sep_size)
{
	int	all_sep_len;
	int	all_str_len;
	int	i;

	all_str_len = 0;
	i = 0;
	all_sep_len = (size - 1) * sep_size;
	while (i < size)
	{
		all_str_len += ft_str_len(strs[i++]);
	}
	return (all_sep_len + all_str_len);
}

int	fillsep(char *dest, char *sep, int j)
{
	int	i;

	i = 0;
	while (sep[i])
		dest[j++] = sep[i++];
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	result = (char *)malloc(ft_all_len(size,
				strs, ft_str_len(sep)) * sizeof(char));
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
		{
			result[j++] = strs[i][k++];
		}
		if (i != size - 1)
			j = fillsep(result, sep, j);
		i++;
	}
	return (result);
}
