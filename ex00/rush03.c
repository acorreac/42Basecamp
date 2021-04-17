/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:49:07 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/10 20:22:47 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char a);

void		rush(int x, int y)
{
	int i; //altura      
	int j; //largura

	i = 1; 
	while (i <= y)
	{
		j = 1; 
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == x) || (i == y && j == x))
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

int		main(void)
{
	rush(123, 42);
	return (0);
}
