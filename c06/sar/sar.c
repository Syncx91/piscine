#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
}

int	main(int argc, char **argv)
{
	int x;
	x = 0;
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (1);
	}

	if (argc == 4)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] == argv[2][0])
			{
				argv[1][x] = argv[3][0];
			}
			x++;
		}
		ft_putstr(argv[1]);
	}
	else
		write(1, "\n", 1);
}