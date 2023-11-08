/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirogi <gcakirog@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:40:17 by gcakirog          #+#    #+#             */
/*   Updated: 2023/08/31 13:58:30 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a ;
	char	b ;

	a = 0 ;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + 48);
			ft_putchar ((a % 10) + 48);
			ft_putchar (' ');
			ft_putchar ((b / 10) + 48);
			ft_putchar ((b % 10) + 48);
			if (!(a == 98 && b == 99))
			{
				write (1, ", ", 2);
			}
			b++ ;
		}
		a++ ;
	}
}
