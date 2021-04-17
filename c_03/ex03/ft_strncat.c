/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:31:21 by acristia          #+#    #+#             */
/*   Updated: 2021/04/16 21:39:28 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int concatenate;
	unsigned int size;

	concatenate = 0;
	size = 0;
	while (dest[concatenate] != '\0')
	{
		concatenate++;
	}
	while ((size < nb) && (src[size] != '\0'))
	{
		dest[concatenate] = src[size];
		concatenate++;
		size++;
	}
	dest[concatenate] = '\0';
	return (dest);
}
