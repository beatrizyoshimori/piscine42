/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:29:17 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/28 13:29:20 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	cmp = s1[i] - s2[i];
	return (cmp);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;
	int	arg[4096];

	k = 1;
	while (k < argc)
	{
		arg[k] = k;
		k++;
	}
	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[arg[i]], argv[arg[j]]) > 0)
				ft_swap(&arg[i], &arg[j]);
			j++;
		}
		ft_putstr(argv[arg[i++]]);
	}
	return (0);
}
