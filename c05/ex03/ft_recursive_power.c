/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:19:37 by nplassar          #+#    #+#             */
/*   Updated: 2025/10/02 12:19:37 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(-7,5));
	printf("%d\n", ft_recursive_power(8,5));
	printf("%d\n", ft_recursive_power(6,2));
	printf("%d\n", ft_recursive_power(0,5));
}*/
