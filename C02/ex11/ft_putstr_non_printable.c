/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:40:49 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/12 22:55:25 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*b;
	int		i;

	b = "0123456789abcdef";
	i = 0;
	while (str[i] || str[i + 1])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar ('\\' );
			ft_putchar (b[str[i] / 16]);
			ft_putchar (b[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
