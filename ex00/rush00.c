/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:54:11 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/03 21:32:53 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char o);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == 1))
				ft_putchar('o');
			else if ((i == 1 && j == x) || (i == y && j == x))
				ft_putchar('o');
			else if ((i == 1 && j > 1 && j < x) || (i == y && j > 1 && j < x))
				ft_putchar('-');
			else if (i >= 2 && i < y && j >= 2 && j < x)
				ft_putchar(' ');
			else
				ft_putchar('|');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
