/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:23:38 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 21:26:19 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	rra(t_stack *a)
{
	int		top;
	t_stack	tmp;

	new_stack(&tmp);
	while (a->size > 1)
	{
		push(&tmp, depush(a));
	}
	top = depush(a);
	while (tmp.size > 0)
	{
		push(a, depush(&tmp));
	}
	push(a, top);
}

void	rrb(t_stack *b)
{
	rra(b);
}

void	rrr(t_stack *a, t_stack *b)
{
	rrab(a);
	rrab(b);
}
