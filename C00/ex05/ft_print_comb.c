/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirogi <gcakirog@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:39:35 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/01 12:19:03 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' ;
	while (a <= '7' )
	{
		b = a + 1;
		while (b <= '8' )
		{
			c = b + 1;
			while (c <= '9' )
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7' )
					write(1, ", ", 2);
				c++ ;
			}
			b++ ;
		}
		a++ ;
	}
}
