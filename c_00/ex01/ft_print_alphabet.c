/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:58:10 by acristia          #+#    #+#             */
/*   Updated: 2021/04/08 17:17:46 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char start_alphabet;

	start_alphabet = 'a';
	while (start_alphabet <= 'z')
	{
		write(1, &start_alphabet, 1);
		start_alphabet++;
	}
}
