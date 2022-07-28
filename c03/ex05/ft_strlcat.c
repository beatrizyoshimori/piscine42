/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoshimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:53:06 by byoshimo          #+#    #+#             */
/*   Updated: 2022/07/25 18:06:56 by byoshimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_src;
	unsigned int	length_dest;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	if (size <= length_dest)
		return (size + length_src);
	i = 0;
	while (src[i] != '\0' && (length_dest + i) < size - 1)
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (length_dest + length_src);
}
