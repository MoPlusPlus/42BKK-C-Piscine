/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 04:35:50 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/20 04:53:07 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	r1;
	unsigned int	r2;

	r1 = 0;
	r2 = 0;
	while (dest[r1] != '\0')
		r1++;
	while (r2 < nb && src[r2] != '\0')
	{
		dest[r1] = src[r2];
		r1++;
		r2++;
	}
	dest[r1] = '\0';
	return (dest);
}
