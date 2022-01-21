/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:01:56 by cupatham          #+#    #+#             */
/*   Updated: 2022/01/20 18:21:12 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_upper(char *str, int i);
void	check_lower(char *str, int i);

int	g_check;

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	g_check = 1;
	while (str[i] != '\0')
	{
		if (g_check == 1)
			char_to_upper(str, i);
		else
			char_to_lower(str, i);
		i++;
	}
	return (str);
}

void	char_to_upper(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		g_check = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
		g_check = 0;
	else if (str[i] >= '0' && str[i] <= '9')
		g_check = 0;
	else
		g_check = 1;
}

void	char_to_lower(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
		g_check = 0;
	}
	else if (str[i] >= '0' && str[i] <= '9')
		g_check = 0;
	else if (str[i] < 'a' || str[i] > 'z')
		g_check = 1;
}
