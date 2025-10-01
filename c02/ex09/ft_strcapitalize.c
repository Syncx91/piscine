/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplassar <nplassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:12:24 by nplassar          #+#    #+#             */
/*   Updated: 2025/10/01 17:53:02 by nplassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z') && !(str[i - 1] >= 'a'
					&& str[i - 1] <= 'z') && !(str[i - 1] >= '1' && str[i
					- 1] <= '9'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

char	ft_strcapitalize(charstr);

int	main(void)
{
	char	str1[] = "salut,
			comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Original: %s\n", str1);
	printf("Result  : %s\n", ft_strcapitalize(str1));
	return (0);
}
*/
