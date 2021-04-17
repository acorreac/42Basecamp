/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:00:36 by acristia          #+#    #+#             */
/*   Updated: 2021/04/08 17:48:30 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(char n1, char n2)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_number(int n)
{
	char numbers_right;
	char numbers_left;

	if (n < 10)
	{
		numbers_right = '0';
		numbers_left = n + '0';
		ft_print_chars(numbers_right, numbers_left);
	}
	else
	{
		numbers_right = n / 10 + '0';
		numbers_left = n % 10 + '0';
		ft_print_chars(numbers_right, numbers_left);
	}
}

void	ft_print_comb2(void)
{
	int number_1;
	int number_2;

	number_1 = 0;
	while (number_1 <= 98)
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{
			ft_print_number(number_1);
			write(1, " ", 1);
			ft_print_number(number_2);
			if (number_1 != 98 || number_2 != 99)
			{
				write(1, ", ", 2);
			}
			number_2++;
		}
		number_1++;
	}
}
