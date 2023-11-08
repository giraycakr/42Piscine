/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:09:21 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/20 21:11:19 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*returnarr;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	returnarr = (int *) malloc((max - min) * sizeof(int));
	if (!returnarr)
		return (0);
	while (min < max)
	{
		returnarr[i] = min;
		min++;
		i++;
	}
	return (returnarr);
}
