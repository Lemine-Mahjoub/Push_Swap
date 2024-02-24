/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:31:56 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 22:42:01 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_stack	pile;
	int		value;

	new_stack(&pile);
	while (argc > 1)
	{
		if (!is_int(argv[argc - 1]))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		value = char_to_int(argv[argc - 1]);
		push(&pile, value);
		argc--;
	}
	checker(&pile);
	return (0);
}
