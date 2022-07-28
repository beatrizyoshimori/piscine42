/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:16:11 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/27 17:47:26 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	nb_is_negative(int n)
{
	write(1, "-", 1);
	if (n == -2147483648)
	{
		write(1, "2", 1);
		n = n + 2000000000;
	}
	n = -n;
	return (n);
}

void	ft_putnbr(int nb)
{
	int		a;
	char	c;

	if (nb < 0)
		nb = nb_is_negative(nb);
	a = nb % 10;
	c = a + '0';
	if (nb <= 9)
	{
		write(1, &c, 1);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
}
