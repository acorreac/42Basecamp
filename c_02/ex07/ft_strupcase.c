/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:23:15 by acristia          #+#    #+#             */
/*   Updated: 2021/04/16 00:14:09 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] >= 'a' && str[character] <= 'z')
		{
			str[character] = str[character] - 32;
		}
		character++;
	}
	return (str);
}
