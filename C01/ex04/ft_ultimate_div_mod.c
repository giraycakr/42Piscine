/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:42:05 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/06 11:49:12 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	gecicibol;
	int	gecicimod;

	gecicibol = *a / *b ;
	gecicimod = *a % *b ;
	*a = gecicibol;
	*b = gecicimod;
}
