/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:04:55 by nplassar          #+#    #+#             */
/*   Updated: 2025/10/02 15:16:02 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
	{
		write(1, &str[x], 1);
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (0 < i)
	{
		ft_putstr(argv[i]);
		i--;
		write(1, "\n", 1);
	}
}
