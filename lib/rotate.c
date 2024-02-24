/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:33:53 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 21:26:40 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ra(t_stack *a)
{
	int		top;
	t_stack	tmp;

	new_stack(&tmp);
	top = depush(a);
	while (a->size > 0)
	{
		push(&tmp, depush(a));
	}
	push(a, top);
	while (tmp.size > 0)
	{
		push(a, depush(&tmp));
	}
}

void	rb(t_stack *b)
{
	ra(b);
}

void	rr(t_stack *a, t_stack *b)
{
	rab(a);
	rab(b);
}
