/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:23:49 by acristia          #+#    #+#             */
/*   Updated: 2021/04/08 17:27:38 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char n1, char n2, char n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (n1 != '7' || n2 != '8' || n3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char number_1;
	char number_2;
	char number_3;

	number_1 = '0';
	while (number_1 <= '7')
	{
		number_2 = number_1 + 1;
		while (number_2 <= '8')
		{
			number_3 = number_2 + 1;
			while (number_3 <= '9')
			{
				ft_print_numbers(number_1, number_2, number_3);
				number_3++;
			}
			number_2++;
		}
		number_1++;
	}
}
