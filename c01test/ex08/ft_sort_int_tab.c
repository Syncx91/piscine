/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:05:21 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/15 14:15:53 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while ((x + 1) < size)
	{
		if (tab[x] < tab[x + 1])
		{
			y = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = y;
			x = 0;
		}
		else
			x++;
	}
}
