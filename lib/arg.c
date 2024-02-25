/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 04:31:29 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 04:33:05 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
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
