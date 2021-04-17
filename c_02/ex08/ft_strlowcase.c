/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:49:57 by acristia          #+#    #+#             */
/*   Updated: 2021/04/16 00:14:57 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int character;

	character = 0;
	while (str[character] != '\0')
	{
		if (str[character] >= 'A' && str[character] <= 'Z')
		{
			str[character] = str[character] + 32;
		}
		character++;
	}
	return (str);
}
