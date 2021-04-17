/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:31:19 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/03 20:07:22 by rsoares-         ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == 1 && j == x))
				ft_putchar('A');
			else if ((i == y && j == 1) || (i == y && j == x))
				ft_putchar('C');
			else if (i >= 2 && i < y && j >= 2 && j < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
