/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:12:24 by nplassar          #+#    #+#             */
/*   Updated: 2025/09/25 14:56:43 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && !(c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
			space = 1;
		else
		{
			if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			space = 0;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	test[] = "hi, how are you? 42words forty-two; fifty+and+one";

I
	printf("%s\n", ft_strcapitalize(test));
	return (0);
}
*/