/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:02:10 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/06 16:27:51 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	bas;
	int	son;
	int	gecici;

	bas = 0;
	son = size -1 ;
	while (bas <= son)
	{
		gecici = tab[bas];
		tab[bas] = tab[son];
		tab[son] = gecici;
		son--;
		bas++;
	}
}
