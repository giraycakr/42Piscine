/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:59:55 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/17 04:38:26 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char *argv[])
{
	int		a;	
	int		b;

	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			write (1, &argv[a][b], 1);
			b++;
		}
		write (1, "\n", 1);
		a++;
	}
}

int	main(int argc, char *argv[])
{
	char		*temp;
	int			i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
