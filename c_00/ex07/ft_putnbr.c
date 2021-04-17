/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:17:17 by acristia          #+#    #+#             */
/*   Updated: 2021/04/09 01:58:10 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int ni)
{
	char	result;
	int		test;
	int		zer_left;

	test = 1000000000;
	while (test > 0)
	{
		result = (ni / test % 10) + '0';
		zer_left = 1;
		if (result != '0')
		{
			zer_left = 0;
		}
		if (zer_left == 0)
		{
			write(1, &result, 1);
		}
		test = test / 10;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int input_number;

	input_number = nb;
	if (nb < 0)
	{
		input_number = input_number * -1;
		write(1, "-", 1);
	}
	ft_print_number(input_number);
	if (input_number == 0)
	{
		write(1, "0", 1);
	}
}
