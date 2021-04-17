/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:09:44 by acristia          #+#    #+#             */
/*   Updated: 2021/04/08 17:17:05 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int start_numbers;

	start_numbers = '0';
	while (start_numbers <= '9')
	{
		write(1, &start_numbers, 1);
		start_numbers++;
	}
}
