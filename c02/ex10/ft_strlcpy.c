/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:36:04 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/19 21:51:26 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int				count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
		if (n == 0)
			continue ;
		if (i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (n)
		dest[i] = '\0';
	return (count);
}
