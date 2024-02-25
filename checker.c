/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:31:56 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 04:37:06 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	new_stack(&a);
	new_stack(&b);
	if (argc == 2)
	{
		process_ints_str(&a, argv[1]);
		tri_lemmings_silencieux(&a, &b);
		checker(&a);
	}
	else if (argc > 2)
	{
		process_ints_args(&a, argv + 1);
		tri_lemmings(&a, &b);
	}
	else
		exit_with_error();
	checker(&a);
	return (0);
}
