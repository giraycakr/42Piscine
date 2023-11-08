/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:58:33 by gcakirog          #+#    #+#             */
/*   Updated: 2023/09/07 12:02:33 by gcakirog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft(int i, int buyukharf, char *str)
{
	while (str[i] != '\0' )
	{
		if ((str[i] <= 'z' && str[i] >= 'a') && buyukharf == 0)
		{
			str[i] = str[i] - 32;
			buyukharf++;
		}
		else if (buyukharf == 0 && (str[i] <= 'Z' && str[i] >= 'A'))
			buyukharf++;
		else if (buyukharf > 0 && (str[i] <= 'Z' && str[i] >= 'A' ))
		{
			str[i] = str[i] + 32;
			buyukharf++;
		}
		else if (buyukharf >= 0 && ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] <= '9' && str[i] >= '0')))
		{
			str[i] = str[i];
			buyukharf++;
		}
		else
			buyukharf = 0;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	buyukharf;

	buyukharf = 0;
	i = 0;
	ft (i, buyukharf, str);
	return (str);
}
