/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:37:30 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/27 16:51:56 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= 46340)
	{
		if (i * i < nb)
			i++;
		else if (i * i == nb)
			return (i);
		else
			return (0);
	}
	return (0);
}
