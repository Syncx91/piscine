/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:05:21 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/17 19:24:42 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	y = 1;
	while (y < size)
	{
		x = 0;
		while (x < size - y)
		{
			if (tab[x] > tab[x + 1])
				ft_swap(&tab[x], &tab[x + 1]);
			x++;
		}
		y++;
	}
}
