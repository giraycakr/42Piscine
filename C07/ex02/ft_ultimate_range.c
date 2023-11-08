/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:58:32 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/20 21:58:34 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*rangearray;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	rangearray = malloc((max - min) * sizeof(int));
	if (!rangearray)
		return (-1);
	i = 0;
	while (min < max)
	{
		rangearray[i] = min;
		i++;
		min++;
	}
	*range = rangearray;
	return (i);
}
