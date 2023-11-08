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
#define INT_MIN -2147483648

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int sayi)
{
	if (sayi == INT_MIN)
	{
		write (1, "-2147483648", 11);
	}
	else if (sayi < 0)
	{
		ft_putchar ('-');
		sayi = -sayi;
		ft_putnbr (sayi);
	}
	else if (sayi >= 0 && sayi <= 9)
	{
		ft_putchar (sayi + 48);
	}
	else
	{
		ft_putnbr (sayi / 10);
		ft_putnbr (sayi % 10);
	}
}
