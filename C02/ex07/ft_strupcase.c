/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 04:00:18 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/07 04:01:53 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] <= 'z' && str[i] >= 'a' )
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
