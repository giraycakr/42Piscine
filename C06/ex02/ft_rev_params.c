/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 02:35:53 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/17 03:57:18 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	while (argc > 1)
	{
		j = 0;
		while (argv[argc - 1][j])
		{
			write (1, &argv[argc - 1][j], 1);
			j++;
		}
		write (1, "\n", 1);
		argc--;
	}
	return (0);
}
