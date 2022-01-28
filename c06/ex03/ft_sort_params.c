/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 07:36:45 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/27 08:56:31 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (-1);
	else
		return (1);
}

char	**ft_str_sort(char *str[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argv = argv + 1;
	argc = argc - 1;
	argv = ft_str_sort(argv, argc);
	while (i < argc)
	{
		ft_put_str(argv[i]);
		ft_put_str("\n");
		i++;
	}
}
