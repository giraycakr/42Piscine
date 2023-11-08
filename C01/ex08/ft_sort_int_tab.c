/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:51:44 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/06 19:55:25 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	gecici;

	x = 0;
	y = 0;
	gecici = 0;
	while (x <= size - 1)
	{
		while (y < size - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				gecici = tab[y + 1];
				tab[y + 1] = tab[y];
				tab[y] = gecici;
			}
			y++;
		}
		x++;
		y = 0;
	}
}
