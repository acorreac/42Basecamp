/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:28:22 by acristia          #+#    #+#             */
/*   Updated: 2021/04/14 16:07:38 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int reverse[size];
	int l;
	int c;

	l = size - 1;
	c = 0;
	while (c < size)
	{
		reverse[c] = tab[l];
		l--;
		c++;
	}
	l = 0;
	while (l < size)
	{
		tab[l] = reverse[l];
		l++;
	}
}
