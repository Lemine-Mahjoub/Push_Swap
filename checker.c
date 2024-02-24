/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:31:56 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 19:01:28 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include <unistd.h>

int	is_sorted(t_stack *pile)
{
	while (pile->size > 1)
	{
		if (pile->data > pile->next->data)
		{
			return (0);
		}
		pile = pile->next;
	}
	return (1);
}

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
	if (is_sorted(&pile))
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "KO\n", 3);
	}
	return (0);
}
