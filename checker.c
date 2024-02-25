/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:31:56 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 04:08:48 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include <unistd.h>
#include <stdlib.h>

void	exit_with_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	process_ints_str(t_stack *a, char *str)
{
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break ;
		push(a, char_to_int(&str));
	}
}

void	process_ints_args(t_stack *a, char **argv)
{
	while (*argv)
	{
		if (!is_int(*argv))
			exit_with_error();
		push(a, char_to_int(argv));
		argv++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	a;

	new_stack(&a);
	if (argc == 1)
		return (0);
	if (argc == 2)
		process_ints_str(&a, argv[1]);
	else if (argc > 2)
		process_ints_args(&a, argv + 1);
	else
		exit_with_error();
	if (is_sorted(&a))
		return (0);
	checker(&a);
	return (0);
}
