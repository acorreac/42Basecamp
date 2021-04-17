/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acristia <acristia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:58:17 by acristia          #+#    #+#             */
/*   Updated: 2021/04/12 12:46:13 by acristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ASCII_SPACE 32
#define MAX_CHARACTERS 16
#define ERROR -1

int		string_length(char input[]);
int		validate_input_interval(char input[]);

int		main(int quant_arg_number, char *args[])
{
	if (quant_arg_number != 2)
	{
		write(1, "Error \n", 8);
		return (0);
	}
	if (string_length(args[1]) != MAX_CHARACTERS)
	{
		write(1, "Error \n", 8);
		return (0);
	}
	if (validate_input_interval(args[1]) == ERROR)
		write(1, "Error \n", 8);
	return (0);
}

int		string_length(char input[])
{
	int size;
	int index;

	size = 0; 
	index = 0;
	while (input[index] != '\0')
	{
		if (ASCII_SPACE != input[index])
		{
			size++;
		}
		index++;
	}
	return (size);
}

int		validate_input_interval(char input[])
{
	int index;

	index = 0;
	while (input[index] != '\0')
	{
		if (49 > input[index] || 52 < input[index])
		{
			if (ASCII_SPACE != input[index])
				return (ERROR);
		}
		index++;
	}
	return (1);
}
