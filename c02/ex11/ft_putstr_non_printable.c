/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:54:34 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/18 11:54:59 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

void	ft_putchar_in_hex(char *c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	write(1, "\\", 1);
	ft_putchar(&hex_digits[*c / 16]);
	ft_putchar(&hex_digits[*c % 16]);
}

int	ft_is_printable(char *c)
{
	if (*c < ' ' || *c > '~')
		return (0);
	else
		return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(&str[i]) == 1)
			ft_putchar(&str[i]);
		else
			ft_putchar_in_hex(&str[i]);
		i++;
	}
}

int	main(void)
{
	char	*str;

	str = "This is a test string to\n display\b";
	ft_putstr_non_printable(str);
}
