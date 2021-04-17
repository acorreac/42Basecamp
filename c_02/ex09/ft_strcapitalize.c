/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:05:57 by acristia          #+#    #+#             */
/*   Updated: 2021/04/16 01:12:00 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int word;
	int letter;

	word = 0;
	letter = 0;
	while (str[word] != '\0')
	{
		if (letter == 0 && (str[word] >= 'a' && str[word] <= 'z'))
		{
			str[word] = str[word] - 32;
			letter++;
		}
		else if (letter > 0 && (str[word] >= 'A' && str[word] <= 'Z'))
		{
			str[word] = str[word] + 32;
		}
		else if ((str[word] < '0' || str[word] > '9') &&
				(str[word] < 'A' || str[word] > 'Z') &&
				(str[word] < 'a' || str[word] > 'z'))
			letter = 0;
		else
			letter++;
		word++;
	}
	return (str);
}
