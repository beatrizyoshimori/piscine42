/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:03:07 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/27 16:10:07 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
