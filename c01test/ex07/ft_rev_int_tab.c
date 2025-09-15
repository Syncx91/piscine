/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:56:59 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/15 14:12:42 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < (size / 2))
	{
		y = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = y;
		x++;
	}
}
