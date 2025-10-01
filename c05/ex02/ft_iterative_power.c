/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wessaddo <wessaddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:12:23 by wessaddo          #+#    #+#             */
/*   Updated: 2025/09/24 19:17:50 by wessaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n,", ft_iterative_power(4, 9));
}*/
