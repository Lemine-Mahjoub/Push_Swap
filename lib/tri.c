/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:43:22 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 00:29:07 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>

int	tri_lemmings(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a->size > 0)
	{
		pb(a, b);
		i++;
		write(1, "pb\n", 3);
		while (b->size > 1 && b->data < b->next->data)
		{
			sb(b);
			i++;
			write(1, "sb\n", 3);
			pa(a, b);
			i++;
			write(1, "pa\n", 3);
		}
	}
	while (b->size > 0)
	{
		pa(a, b);
		write(1, "pa\n", 3);
		i++;
	}
	return (i);
}
