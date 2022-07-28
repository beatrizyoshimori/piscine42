/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:17:53 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/25 18:03:18 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	i;

	d = 0;
	while (dest[d] != '\0')
		d++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dest);
}
