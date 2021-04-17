/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:48:50 by acristia          #+#    #+#             */
/*   Updated: 2021/04/16 21:17:12 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int com;

	com = 0;
	if (n == 0)
		return (0);
	while (s1[com] != '\0' && s1[com] == s2[com] && com < n - 1)
		com++;
	return ((unsigned char)s1[com] - (unsigned char)s2[com]);
}
