/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:39:04 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/24 16:47:01 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*make_hexa(char *hexa)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 16)
	{
		if (i <= 9)
			hexa[i] = i + '0';
		else
		{
			hexa[i] = c;
			c++;
		}
		i++;
	}
	return (hexa);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	char	hexa[16];

	make_hexa(hexa);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			write(1, "\\", 1);
			j = str[i];
			write(1, &hexa[j / 16], 1);
			write(1, &hexa[j % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
