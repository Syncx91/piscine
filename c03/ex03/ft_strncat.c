/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:37:05 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/25 15:46:48 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	i = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
