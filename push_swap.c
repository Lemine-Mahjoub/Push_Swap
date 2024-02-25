/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:20:18 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 04:59:35 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	new_stack(&a);
	new_stack(&b);
	if (argc == 1)
		return (0);
	if (argc == 2)
		process_ints_str(&a, argv[1]);
	else if (argc > 2)
		process_ints_args(&a, argv + 1);
	else
		exit_with_error();
	tri_lemmings(&a, &b);
	return (0);
}
