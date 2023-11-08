/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:50:38 by onguler           #+#    #+#             */
/*   Updated: 2023/09/20 22:36:02 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen])
		strlen++;
	return (strlen);
}

int	return_lenght(int size, char **strs, char *sep)
{
	int	i;
	int	length;
	int	sep_length;

	sep_length = ft_strlen(sep);
	i = 0;
	length = 0;
	while (i < size)
		length += sep_length + ft_strlen(strs[i++]);
	length -= sep_length;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*returnstr;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return (malloc(1));
	returnstr = malloc(
			sizeof(char) * return_lenght(size, strs, sep) + 1);
	if (!returnstr)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			returnstr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			returnstr[k++] = sep[j++];
		i++;
	}
	returnstr[k] = '\0';
	return (returnstr);
}
