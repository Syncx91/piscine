/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:10:16 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/13 16:57:13 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_if(int a, int b, int x, int y);

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR", 5);
		return ;
	}
	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			ft_if(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

void	ft_if(int a, int b, int x, int y)
{
	if ((b == 0 && a == 0) || (b == y - 1 && a == x - 1 && y > 1 && x > 1))
		ft_putchar('/');
	else if ((b == 0 && a == x - 1) || (b == y - 1 && a == 0))
		ft_putchar('\\');
	else if (b == 0 || b == y - 1 || a == 0 || a == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}
