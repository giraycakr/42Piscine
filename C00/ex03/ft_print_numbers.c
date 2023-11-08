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

void	ft_print_numbers(void)
{
	int	sayi;

	sayi = '0';
	while (sayi <= '9' )
	{
		write(1, &sayi, 1);
		sayi++;
	}
}
