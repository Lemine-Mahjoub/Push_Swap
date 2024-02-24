/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:20:18 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 00:03:19 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		value;

	new_stack(&a);
	while (argc > 1)
	{
		if (!is_int(argv[argc - 1]))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		value = char_to_int(argv[argc - 1]);
		push(&a, value);
		argc--;
	}
	tri_lemmings(&a, &b);
	checker(&a);
	return (0);
}
